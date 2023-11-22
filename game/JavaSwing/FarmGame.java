import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

class FarmGame extends JFrame {
    private static final int GRID_SIZE = 10;
    private static final int CELL_SIZE = 50;

    private JLabel[][] gridLabels;
    private List<Point> fruits;
    private Point playerPosition;

    public FarmGame() {
        setTitle("Farm Game");
        setSize(GRID_SIZE * CELL_SIZE, GRID_SIZE * CELL_SIZE);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        gridLabels = new JLabel[GRID_SIZE][GRID_SIZE];
        fruits = new ArrayList<>();
        playerPosition = new Point(0, 0);

        initializeUI();
        generateFruits();

        Timer timer = new Timer(1000, new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                moveFruits();
                repaint();
            }
        });
        timer.start();
    }

    private void initializeUI() {
        setLayout(new GridLayout(GRID_SIZE, GRID_SIZE));

        for (int i = 0; i < GRID_SIZE; i++) {
            for (int j = 0; j < GRID_SIZE; j++) {
                gridLabels[i][j] = new JLabel();
                gridLabels[i][j].setPreferredSize(new Dimension(CELL_SIZE, CELL_SIZE));
                gridLabels[i][j].setBorder(BorderFactory.createLineBorder(Color.BLACK));
                add(gridLabels[i][j]);
            }
        }

        updateGrid();
        addKeyListener(new PlayerKeyListener());
        setFocusable(true);
    }

    private void generateFruits() {
        Random random = new Random();
        for (int i = 0; i < 5; i++) {
            int x = random.nextInt(GRID_SIZE);
            int y = random.nextInt(GRID_SIZE);
            fruits.add(new Point(x, y));
        }
    }

    private void moveFruits() {
        Random random = new Random();
        for (Point fruit : fruits) {
            int direction = random.nextInt(4); // 0: UP, 1: DOWN, 2: LEFT, 3: RIGHT
            switch (direction) {
                case 0:
                    fruit.x = (fruit.x - 1 + GRID_SIZE) % GRID_SIZE;
                    break;
                case 1:
                    fruit.x = (fruit.x + 1) % GRID_SIZE;
                    break;
                case 2:
                    fruit.y = (fruit.y - 1 + GRID_SIZE) % GRID_SIZE;
                    break;
                case 3:
                    fruit.y = (fruit.y + 1) % GRID_SIZE;
                    break;
            }
        }
    }

    private void updateGrid() {
        for (int i = 0; i < GRID_SIZE; i++) {
            for (int j = 0; j < GRID_SIZE; j++) {
                gridLabels[i][j].setIcon(null);
            }
        }

        for (Point fruit : fruits) {
            gridLabels[fruit.x][fruit.y].setIcon(new ImageIcon("fruit.png"));
        }

        gridLabels[playerPosition.x][playerPosition.y].setIcon(new ImageIcon("player.png"));
    }

    private class PlayerKeyListener extends KeyAdapter {
        @Override
        public void keyPressed(KeyEvent e) {
            int keyCode = e.getKeyCode();
            switch (keyCode) {
                case KeyEvent.VK_UP:
                    playerPosition.x = (playerPosition.x - 1 + GRID_SIZE) % GRID_SIZE;
                    break;
                case KeyEvent.VK_DOWN:
                    playerPosition.x = (playerPosition.x + 1) % GRID_SIZE;
                    break;
                case KeyEvent.VK_LEFT:
                    playerPosition.y = (playerPosition.y - 1 + GRID_SIZE) % GRID_SIZE;
                    break;
                case KeyEvent.VK_RIGHT:
                    playerPosition.y = (playerPosition.y + 1) % GRID_SIZE;
                    break;
            }

            checkCollision();
            updateGrid();
        }

        private void checkCollision() {
            for (Point fruit : fruits) {
                if (fruit.equals(playerPosition)) {
                    fruits.remove(fruit);
                    fruits.add(generateNewFruit());
                    break;
                }
            }
        }

        private Point generateNewFruit() {
            Random random = new Random();
            int x = random.nextInt(GRID_SIZE);
            int y = random.nextInt(GRID_SIZE);
            return new Point(x, y);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            FarmGame farmGame = new FarmGame();
            farmGame.setVisible(true);
        });
    }
}

