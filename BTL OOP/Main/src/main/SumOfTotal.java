package main;

import javax.swing.*;
import java.util.ArrayList;
import java.util.HashMap;

public class SumOfTotal {
    private JTextArea textArea;

    public SumOfTotal(ArrayList<Bill> billList, JTextArea resultTextArea) {
        this.textArea = resultTextArea;

        // Create a HashMap to store the total money by year
        HashMap<Integer, Double> totalByYear = new HashMap<>();

        // Iterate through the billList
        for (Bill bill : billList) {
            // Extract the year from the date in the bill
            int year = extractYearFromDate(bill.getDate());

            // Calculate the total money for the bill
            double totalMoney = bill.getPrice() * bill.getQuantity();

            // Update the total money for the corresponding year in the HashMap
            totalByYear.put(year, totalByYear.getOrDefault(year, 0.0) + totalMoney);
        }

        // Display the total money by year in the JTextArea
        for (int year : totalByYear.keySet()) {
            double totalMoney = totalByYear.get(year);
            textArea.append("Year " + year + ": Total Money = " + totalMoney + "\n");
        }
    }

    // Helper method to extract the year from a date string (assuming date format is "dd/MM/yyyy")
    private int extractYearFromDate(String date) {
        try {
            String[] parts = date.split("/");
            if (parts.length == 3) {
                return Integer.parseInt(parts[2]);
            }
        } catch (NumberFormatException e) {
            System.err.println("Error parsing year: " + e.getMessage());
        } catch (ArrayIndexOutOfBoundsException e) {
            System.err.println("Error extracting year: Array index out of bounds.");
        }
        return 0; // Default value if year extraction fails
    }
}
