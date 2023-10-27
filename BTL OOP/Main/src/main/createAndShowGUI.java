package main;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class createAndShowGUI {
    private static JComboBox comboBox;
    private static CustomerForm customers;
    private static BillForm bills;
    private static TicketForm tickets;
    private JTextArea resultTextArea;
    private JFrame frame;

    public JFrame getFrame() {
        return frame;
    }

    createAndShowGUI(JTextArea resultTextArea) {
        this.resultTextArea = resultTextArea;
        frame = new JFrame("Train Ticket System");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(600, 400);
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout());

        // Create a panel to hold the label and JComboBox
        JPanel comboBoxPanel = new JPanel();
        comboBoxPanel.setLayout(new BorderLayout());

        JLabel label = new JLabel("Choose an option!");
        label.setFont(new Font("MV Boli", Font.BOLD, 50));
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setVerticalAlignment(JLabel.TOP);
        String[] choice = {"Customer", "Ticket", "Bill", "Sort Ticket By Price", "Sort Bill By Date", "Sort Bill By Total Money", "Sum Of Total Money By Year"};
        comboBox = new JComboBox(choice);

        // Add the label and JComboBox to the comboBoxPanel
        comboBoxPanel.add(label, BorderLayout.NORTH);
        comboBoxPanel.add(comboBox, BorderLayout.CENTER);

        // Add the comboBoxPanel to the main panel
        panel.add(comboBoxPanel, BorderLayout.NORTH);

        // Create a panel to hold the JTextArea
        JPanel textAreaPanel = new JPanel();
        textAreaPanel.setLayout(new BorderLayout());

        // Create a JScrollPane for the JTextArea
        JScrollPane scrollPane = new JScrollPane(resultTextArea);
        scrollPane.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);

        // Set the preferred size for the JScrollPane (adjust as needed)
        scrollPane.setPreferredSize(new Dimension(800, 200)); // Width and Height
        resultTextArea.setEditable(false);

        // Add the JScrollPane to the textAreaPanel
        textAreaPanel.add(scrollPane, BorderLayout.CENTER);

        // Add the textAreaPanel to the main panel
        panel.add(textAreaPanel, BorderLayout.CENTER);

        JButton button = new JButton("OK");
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (e.getSource() == button) {
                    showSelectedForm();
                }
            }
        });

        panel.add(button, BorderLayout.SOUTH);

        frame.add(panel);
        frame.setVisible(true);
        frame.setResizable(false);
    }

    private void showSelectedForm() {
        String selectedOption = (String) comboBox.getSelectedItem();

        if (selectedOption.equals("Customer")) {
            new CustomerForm();
        } else if (selectedOption.equals("Ticket")) {
            new TicketForm();
        } else if (selectedOption.equals("Bill")) {
           bills=new BillForm(customers.customerList, tickets.ticketList);
        } else if (selectedOption.equals("Sort Ticket By Price")) {
            new SortTicketByPrice(tickets.ticketList, resultTextArea);
        } else if (selectedOption.equals("Sort Bill By Date")) {
           new SortBillByDate(bills.billList, resultTextArea);
        } else if (selectedOption.equals("Sort Bill By Total Money")) {
            new SortBillByTotalMoney(bills.billList, tickets.ticketList, resultTextArea);
        } else {
            new SumOfTotal(bills.billList,resultTextArea);
        }
    }
}
