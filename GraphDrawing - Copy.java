import javax.swing.*;
import java.awt.*;

public class GraphDrawing extends JPanel {

    // Sample data points
    int[] values = {10, 40, 25, 60, 30, 80, 55};

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        // Background
        g.setColor(Color.WHITE);
        g.fillRect(0, 0, getWidth(), getHeight());

        // Draw axes
        g.setColor(Color.BLACK);
        g.drawLine(50, 350, 450, 350);  // X-axis
        g.drawLine(50, 350, 50, 50);    // Y-axis

        // Plot points and lines
        g.setColor(Color.BLUE);

        int x = 60;
        for (int i = 0; i < values.length - 1; i++) {
            int x1 = x + (i * 50);
            int y1 = 350 - values[i];

            int x2 = x + ((i + 1) * 50);
            int y2 = 350 - values[i + 1];

            g.fillOval(x1 - 3, y1 - 3, 6, 6); // point
            g.drawLine(x1, y1, x2, y2);       // connect points
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Simple Line Graph");
        GraphDrawing panel = new GraphDrawing();

        frame.add(panel);
        frame.setSize(500, 450);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
