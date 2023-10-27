package main;

import javax.swing.*;
import java.util.ArrayList;
import java.util.Collections;

public class SortTicketByPrice {
    private JTextArea resultTextArea; // Added JTextArea

    public SortTicketByPrice(ArrayList<Ticket> ticketList, JTextArea resultTextArea) {
        this.resultTextArea = resultTextArea; // Store the JTextArea
        sortTicketsByPriceDescending(ticketList);
        displayResults(ticketList);
    }

    public static void sortTicketsByPriceDescending(ArrayList<Ticket> ticketList) {
        Collections.sort(ticketList, (ticket1, ticket2) -> Double.compare(ticket2.getPrice(), ticket1.getPrice()));
    }

    public void displayResults(ArrayList<Ticket> ticketList) {
        resultTextArea.setText("Sorted Tickets by Price (Descending):\n");
        for (Ticket ticket : ticketList) {
            resultTextArea.append(ticket.toString() + "\n");
        }
    }
}

