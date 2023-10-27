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
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;

public class CustomerForm {
    public static ArrayList<Customer> customerList = new ArrayList<>();
    private static int selectedRowIndex = -1;
    private int currentCustomerID = 1;
    public static JFrame customerFrame;

    CustomerForm() {
        customerFrame = new JFrame("Customer Form");
        customerFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        customerFrame.setSize(800, 600);

        JPanel customerPanel = new JPanel();
        customerPanel.setLayout(new BorderLayout());

        String[] columnNames = {"Code", "First Name", "Last Name", "Birth Date", "Type"};
        DefaultTableModel customerTableModel = new DefaultTableModel(columnNames, 0) {
            public boolean isCellEditable(int row, int column) {
                return false;
            }
        };
        JTable customerTable = new JTable(customerTableModel);

        JScrollPane tableScrollPane = new JScrollPane(customerTable);

        JTextField codeField = new JTextField(5);
        JTextField fullNameField = new JTextField(15);
        JDateChooser birthDateChooser = new JDateChooser();
        birthDateChooser.setDateFormatString("dd/MM/yyyy");
        birthDateChooser.setPreferredSize(new Dimension(150, 30));
        String[] customerTypes = {"Retail", "Team", "Online"};
        JComboBox<String> typeComboBox = new JComboBox<>(customerTypes);

        JButton addButton = new JButton("Add");
        JButton saveButton = new JButton("Save (CUSTOMER.DAT)");
        JButton editButton = new JButton("Edit");

        customerPanel.add(tableScrollPane, BorderLayout.CENTER);

        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new BoxLayout(inputPanel, BoxLayout.Y_AXIS));
        inputPanel.add(new JLabel("Code: "));
        inputPanel.add(codeField);
        inputPanel.add(new JLabel("Full Name: "));
        inputPanel.add(fullNameField);
        inputPanel.add(new JLabel("Birth Date: "));
        inputPanel.add(birthDateChooser);
        inputPanel.add(new JLabel("Type: "));
        inputPanel.add(typeComboBox);
        inputPanel.add(addButton);
        inputPanel.add(saveButton);
        inputPanel.add(editButton);

        customerPanel.add(inputPanel, BorderLayout.WEST);

        customerFrame.add(customerPanel);
        customerFrame.setVisible(true);

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String fullName = fullNameField.getText();
                Date birthDate = birthDateChooser.getDate();
                String type = (String) typeComboBox.getSelectedItem();

                String code = codeField.getText();
                if (code.length() != 5) {
                    JOptionPane.showMessageDialog(customerFrame, "Please enter a 5-digit code.");
                    return;
                }

                if (fullName.isEmpty() || birthDate == null) {
                    JOptionPane.showMessageDialog(customerFrame, "Please enter a valid full name and birth date.");
                } else {
                    String[] nameParts = fullName.split(" ");
                    String firstName = nameParts[0];
                    String lastName = "";
                    for (int i = 1; i < nameParts.length; i++) {
                        lastName += nameParts[i] + " ";
                    }
                    lastName = lastName.trim();

                    SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
                    String formattedDate = sdf.format(birthDate);

                    Customer customer = new Customer();
                    customer.setCode(code);
                    customer.setFirstName(firstName);
                    customer.setLastName(lastName);
                    customer.setBirthDate(formattedDate);
                    customer.setType(type);

                    addCustomerToTable(customer, customerTableModel);

                    int numericCode = Integer.parseInt(code);
                    if (numericCode >= currentCustomerID) {
                        currentCustomerID = numericCode + 1;
                    }

                    codeField.setText(String.format("%05d", currentCustomerID));
                    codeField.setEditable(false);
                    fullNameField.setText("");
                    birthDateChooser.setDate(null);
                    typeComboBox.setSelectedIndex(0);
                }
            }
        });

        saveButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try (BufferedWriter writer = new BufferedWriter(new FileWriter("CUSTOMER.DAT", false))) {
                    for (Customer customer : customerList) {
                        writer.write(customer.toString());
                        writer.newLine();
                    }
                    if (customerList.isEmpty()) {
                        JOptionPane.showMessageDialog(customerFrame, "No Data to save!");
                    } else {
                        JOptionPane.showMessageDialog(customerFrame, "Data saved successfully!");
                    }
                } catch (IOException ex) {
                    ex.printStackTrace();
                }
            }
        });

        editButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (selectedRowIndex >= 0) {
                    Customer selectedCustomer = customerList.get(selectedRowIndex);
                    String newCode = codeField.getText();
                    String newFullName = fullNameField.getText();
                    Date newBirthDate = birthDateChooser.getDate();
                    String newType = (String) typeComboBox.getSelectedItem();

                    try {
                        int codeInt = Integer.parseInt(newCode);
                        if (newCode.length() != 5) {
                            JOptionPane.showMessageDialog(customerFrame, "Please enter a 5-digit code.");
                            return;
                        }
                    } catch (NumberFormatException ex) {
                        JOptionPane.showMessageDialog(customerFrame, "Please enter a valid 5-digit code.");
                        return;
                    }

                    String[] nameParts = newFullName.split(" ");
                    String newFirstName = nameParts[0];
                    String newLastName = "";
                    if (nameParts.length > 1) {
                        StringBuilder lastName = new StringBuilder();
                        for (int i = 1; i < nameParts.length; i++) {
                            lastName.append(nameParts[i]);
                            if (i < nameParts.length - 1) {
                                lastName.append(" ");
                            }
                        }
                        newLastName = lastName.toString();
                    }

                    SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
                    String formattedDate = sdf.format(newBirthDate);

                    selectedCustomer.setCode(newCode);
                    selectedCustomer.setFirstName(newFirstName);
                    selectedCustomer.setLastName(newLastName);
                    selectedCustomer.setBirthDate(formattedDate);
                    selectedCustomer.setType(newType);

                    customerTable.setValueAt(newCode, selectedRowIndex, 0);
                    customerTable.setValueAt(newFirstName, selectedRowIndex, 1);
                    customerTable.setValueAt(newLastName, selectedRowIndex, 2);
                    customerTable.setValueAt(formattedDate, selectedRowIndex, 3);
                    customerTable.setValueAt(newType, selectedRowIndex, 4);

                    int numericCode = Integer.parseInt(newCode);
                    if (numericCode >= currentCustomerID) {
                        currentCustomerID = numericCode + 1;
                    }

                    codeField.setEditable(false);
                    codeField.setText(String.format("%05d", currentCustomerID));
                    fullNameField.setText("");
                    birthDateChooser.setDate(null);
                    typeComboBox.setSelectedItem("");
                    selectedRowIndex = -1;
                } else {
                    JOptionPane.showMessageDialog(customerFrame, "Please select a customer to edit.");
                }
            }
        });

        customerTable.getSelectionModel().addListSelectionListener(e -> {
            if (!e.getValueIsAdjusting()) {
                selectedRowIndex = customerTable.getSelectedRow();
                if (selectedRowIndex >= 0) {
                    Customer selectedCustomer = customerList.get(selectedRowIndex);
                    codeField.setEditable(true);
                    codeField.setText(selectedCustomer.getCode());
                    fullNameField.setText(selectedCustomer.getFullName());
                    birthDateChooser.setDate(parseDate(selectedCustomer.getBirthDate()));
                    typeComboBox.setSelectedItem(selectedCustomer.getType());
                }
            }
        });
    }

    private static void addCustomerToTable(Customer customer, DefaultTableModel tableModel) {
        String[] rowData = {
                customer.getCode(),
                customer.getFirstName(),
                customer.getLastName(),
                customer.getBirthDate(),
                customer.getType()
        };
        tableModel.addRow(rowData);
        customerList.add(customer);
    }

    private static Date parseDate(String dateStr) {
        try {
            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
            return sdf.parse(dateStr);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }


}
