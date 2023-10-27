package main;

import javax.swing.*;
import java.awt.*;


public class Main {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                JTextArea resultTextArea = new JTextArea();
                JScrollPane resultScrollPane = new JScrollPane(resultTextArea);
                resultTextArea.setFont(new Font("Ariel",Font.BOLD,20));
                createAndShowGUI gui = new createAndShowGUI(resultTextArea);
                JFrame frame = gui.getFrame();
                frame.add(resultScrollPane, BorderLayout.WEST);
                frame.setVisible(true);
                frame.pack();
            }
        });
    }
}
