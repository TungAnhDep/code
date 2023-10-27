package main;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;

public class TicketForm {
    public static ArrayList<Ticket> ticketList = new ArrayList<>();
    private int currentTicketID = 1; // Initialize the ticket ID to 1 by default

    TicketForm() {
        JFrame ticketFrame = new JFrame("Ticket Form");
        ticketFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        JPanel ticketPanel = new JPanel();
        ticketPanel.setLayout(new BorderLayout());

        // Create a table to display ticket details
        String[] columnNames = {"Code", "Seat Type", "Price"};
        DefaultTableModel ticketTableModel = new DefaultTableModel(columnNames, 0){
            @Override
            public boolean isCellEditable(int row, int column) {
                return false;
            }
        };
        JTable ticketTable = new JTable(ticketTableModel);

        JScrollPane tableScrollPane = new JScrollPane(ticketTable);

        // Create input fields
        JTextField codeField = new JTextField(10);
        JTextField seatTypeField = new JTextField(15);
        JTextField priceField = new JTextField(10);

        // Create buttons
        JButton addButton = new JButton("Add");
        JButton saveButton = new JButton("Save (TICKET.DAT)");
        JButton removeButton = new JButton("Remove");

        // Add components to the panel
        ticketPanel.add(tableScrollPane, BorderLayout.CENTER);

        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new BoxLayout(inputPanel, BoxLayout.Y_AXIS));
        inputPanel.add(new JLabel("Code (3 digits): "));
        inputPanel.add(codeField);
        inputPanel.add(new JLabel("Seat Type: "));
        inputPanel.add(seatTypeField);
        inputPanel.add(new JLabel("Price: "));
        inputPanel.add(priceField);
        inputPanel.add(addButton);
        inputPanel.add(saveButton);
        inputPanel.add(removeButton);

        ticketPanel.add(inputPanel, BorderLayout.WEST);

        ticketFrame.add(ticketPanel);
        ticketFrame.setVisible(true);
        ticketFrame.pack();

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String code = codeField.getText();
                String seatType = seatTypeField.getText();
                String priceText = priceField.getText();
                if (code.isEmpty() || seatType.isEmpty() || priceText.isEmpty()){
                    JOptionPane.showMessageDialog(ticketFrame, "Please enter all fields.");
                    return;
                }
                double price = Double.parseDouble(priceText);
                // Check if the code is a 3-digit number
                try {
                    int idInt = Integer.parseInt(code);
                    if (code.length() != 3) {
                        JOptionPane.showMessageDialog(ticketFrame, "Please enter a 3-digit ticket code.");
                        return;
                    }
                } catch (NumberFormatException ex) {
                    JOptionPane.showMessageDialog(ticketFrame, "Please enter a valid 3-digit ticket code.");
                    return;
                }

                Ticket ticket = new Ticket("", "", 0);
                ticket.setCode(code);
                ticket.setSeatType(seatType);
                ticket.setPrice(price);
                ticketList.add(ticket);

                addTicketToTable(ticket, ticketTableModel);

                JOptionPane.showMessageDialog(ticketFrame, "Ticket added successfully.");

                // Automatically increment the currentTicketID for the next ticket
                int numericID = Integer.parseInt(code);
                if (numericID >= currentTicketID) {
                    currentTicketID = numericID + 1;
                }

                codeField.setText(String.format("%03d", currentTicketID));
                codeField.setEditable(false);
                seatTypeField.setText("");
                priceField.setText("");
            }
        });

        saveButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try (BufferedWriter writer = new BufferedWriter(new FileWriter("TICKET.DAT", false))) {
                    for (Ticket ticket : ticketList) {
                        writer.write(ticket.toString());
                        writer.newLine();
                    }
                    if(ticketList.isEmpty()){
                        JOptionPane.showMessageDialog(ticketFrame, "No data to save!");
                    }
                    else JOptionPane.showMessageDialog(ticketFrame, "Data saved successfully!");

                } catch (IOException ex) {
                    ex.printStackTrace();
                }
            }
        });

        removeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int selectedRow = ticketTable.getSelectedRow();
                if (selectedRow >= 0) {
                    Ticket ticketToRemove = ticketList.get(selectedRow);
                    ticketList.remove(ticketToRemove);
                    ticketTableModel.removeRow(selectedRow);

                    // Update the codeField
                    if (ticketList.isEmpty()) {
                        codeField.setText(""); // Empty if all tickets are deleted
                        codeField.setEditable(true);
                    } else {
                        // Set codeField to the ID of the previous ticket
                        currentTicketID = Integer.parseInt(ticketList.get(ticketList.size() - 1).getCode());
                        codeField.setText(String.format("%03d", currentTicketID));

                    }
                    JOptionPane.showMessageDialog(ticketFrame, "Ticket Removed Successfully.");
                } else {
                    JOptionPane.showMessageDialog(ticketFrame, "Please select a ticket to remove.");
                }
            }
        });
    }

    private static void addTicketToTable(Ticket ticket, DefaultTableModel tableModel) {
        String[] rowData = {
                ticket.getCode(),
                ticket.getSeatType(),
                String.valueOf(ticket.getPrice())
        };
        tableModel.addRow(rowData);
    }
    public static void sortTicketsByPriceDescending(ArrayList<Ticket> ticketList) {
        Collections.sort(ticketList, (ticket1, ticket2) -> Double.compare(ticket2.getPrice(), ticket1.getPrice()));
    }

}
