package main;
import com.toedter.calendar.JDateChooser;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

public class BillForm {
    private static JFrame billFrame;
    private JTable billTable;
    private DefaultTableModel billTableModel;
    public  ArrayList<Bill> billList;
    private ArrayList<Customer> customerList;
    private ArrayList<Ticket> ticketList;
    private String[] columnNames;
    private final HashSet<String> addedTicketIDAndDay = new HashSet<>();
    private JTextArea resultTextArea;
    private JDateChooser dateChooser;

    private Map<String, Integer> ticketsSoldByCustomer = new HashMap<>();

    private JTextField customerIDField;
    private JTextField ticketIDField;
    private JTextField quantityField;

    public BillForm(ArrayList<Customer> customers, ArrayList<Ticket> tickets) {
        billFrame = new JFrame("Bill Form");
        billFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        billFrame.setSize(800, 400);

        billList = new ArrayList<>();
        customerList = customers;
        ticketList = tickets;

        columnNames = new String[]{
                "Customer ID",
                "Customer First Name",
                "Customer Last Name",
                "Ticket ID",
                "Seat Type",
                "Ticket Price",
                "Quantity",
                "Total Price",
                "Day"
        };

        billTableModel = new DefaultTableModel(columnNames, 0) {
            @Override
            public boolean isCellEditable(int row, int column) {
                return false; // Make the table non-editable
            }
        };

        billTable = new JTable(billTableModel);

        JScrollPane tableScrollPane = new JScrollPane(billTable);

        JButton addButton = new JButton("Add");
        JButton saveButton = new JButton("Save (BILL.DAT)");

        dateChooser = new JDateChooser();
        dateChooser.setDateFormatString("dd/MM/yyyy");

        JPanel billPanel = new JPanel();
        billPanel.setLayout(new BorderLayout());
        billPanel.add(tableScrollPane, BorderLayout.CENTER);

        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new GridLayout(0, 2));

        customerIDField = new JTextField();
        ticketIDField = new JTextField();
        quantityField = new JTextField();

        inputPanel.add(new JLabel("Enter Customer ID:"));
        inputPanel.add(customerIDField);
        inputPanel.add(new JLabel("Enter Ticket ID:"));
        inputPanel.add(ticketIDField);
        inputPanel.add(new JLabel("Enter Quantity:"));
        inputPanel.add(quantityField);
        inputPanel.add(new JLabel("Select Purchase Date:"));
        inputPanel.add(dateChooser);

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(addButton);
        buttonPanel.add(saveButton);

        billPanel.add(inputPanel, BorderLayout.NORTH);
        billPanel.add(buttonPanel, BorderLayout.SOUTH);

        billFrame.add(billPanel);
        billFrame.setVisible(true);

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addBillToTable();
            }
        });

        saveButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                saveBillData();
            }
        });
    }

    private void addBillToTable() {
        String customerID = customerIDField.getText();
        String ticketID = ticketIDField.getText();
        String quantityInput = quantityField.getText();
        Date inputDate = dateChooser.getDate();

        // Check if any of the fields is empty
        if (customerID.isEmpty() || ticketID.isEmpty() || quantityInput.isEmpty() || inputDate == null) {
            JOptionPane.showMessageDialog(billFrame, "All fields are required. Please fill in all the information.");
            return;
        }

        int quantity;
        try {
            quantity = Integer.parseInt(quantityInput);
        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(billFrame, "Quantity must be a valid number.");
            return;
        }

        Customer selectedCustomer = null;
        for (Customer customer : customerList) {
            if (customer.getCode().equals(customerID)) {
                selectedCustomer = customer;
                break;
            }
        }

        Ticket selectedTicket = null;
        for (Ticket ticket : ticketList) {
            if (ticket.getCode().equals(ticketID)) {
                selectedTicket = ticket;
                break;
            }
        }

        if (selectedCustomer == null) {
            JOptionPane.showMessageDialog(billFrame, "Customer with ID " + customerID + " does not exist.");
        } else if (selectedTicket == null) {
            JOptionPane.showMessageDialog(billFrame, "Ticket with ID " + ticketID + " does not exist.");
        } else {
            String[] rowData = new String[columnNames.length];
            double totalPrice = selectedTicket.getPrice() * quantity;
            String purchaseDay = new SimpleDateFormat("dd/MM/yyyy").format(inputDate);

            String customerSeatDayKey = customerID + "-" + selectedTicket.getSeatType() + "-" + purchaseDay;

            // Check if the quantity exceeds 5
            if (quantity >= 5) {
                JOptionPane.showMessageDialog(billFrame, "Customer has exceeded the limit of 5 tickets for the selected seat type and day.");
            } else if (addedTicketIDAndDay.contains(customerSeatDayKey)) {
                JOptionPane.showMessageDialog(billFrame, "Ticket with ID " + ticketID + " has already been added for the same day.");
            } else {
                rowData[0] = selectedCustomer.getCode();
                rowData[1] = selectedCustomer.getFirstName();
                rowData[2] = selectedCustomer.getLastName();
                rowData[3] = selectedTicket.getCode();
                rowData[4] = selectedTicket.getSeatType();
                rowData[5] = Double.toString(selectedTicket.getPrice());
                rowData[6] = Integer.toString(quantity);
                rowData[7] = Double.toString(totalPrice);
                rowData[8] = purchaseDay;

                billTableModel.addRow(rowData);
                Bill bill = new Bill(rowData[0], rowData[3], rowData[4], rowData[8], quantity, rowData[1], rowData[2], selectedTicket.getPrice());

                ticketsSoldByCustomer.put(customerSeatDayKey, ticketsSoldByCustomer.getOrDefault(customerSeatDayKey, 0) + quantity);

                // Add the combination of ticket ID and day to the set
                addedTicketIDAndDay.add(customerSeatDayKey);
                billList.add(bill);
            }
        }
    }

    private void saveBillData() {
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("BILL.DAT", false))) {
            for (Bill bill:billList){
                writer.write(bill.toString());
                writer.newLine();
            }
            if (billList.isEmpty()){
                JOptionPane.showMessageDialog(billFrame, "No data to save!");
            } else {
                JOptionPane.showMessageDialog(billFrame, "Bill data saved successfully!");
            }
        } catch (IOException ex) {
            ex.printStackTrace();
            JOptionPane.showMessageDialog(billFrame, "Error saving bill data.");
        }
    }
}
