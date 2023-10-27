package main;

import javax.swing.*;
import java.util.ArrayList;
import java.awt.*;
import java.util.Collections;

public class SortBillByTotalMoney {
    public SortBillByTotalMoney(ArrayList<Bill> billList, ArrayList<Ticket> ticketList, JTextArea resultTextArea) {
        // Sort the billList by total money
        Collections.sort(billList, (bill1, bill2) -> {
            double totalMoney1 = bill1.getQuantity() * findTicketPrice(ticketList, bill1.getTicketCode());
            double totalMoney2 = bill2.getQuantity() * findTicketPrice(ticketList, bill2.getTicketCode());
            return Double.compare(totalMoney2, totalMoney1);
        });

        // Display the sorted results in the JTextArea
        resultTextArea.setText("Sorted Bills By Total Money:\n");
        for (Bill bill : billList) {
            resultTextArea.append(bill.toString() + "\n");
        }
    }

    // Helper method to find the ticket price by ticket code
    private double findTicketPrice(ArrayList<Ticket> ticketList, String ticketCode) {
        for (Ticket ticket : ticketList) {
            if (ticket.getCode().equals(ticketCode)) {
                return ticket.getPrice();
            }
        }
        return 0.0; // Return 0 if the ticket code is not found
    }
}
