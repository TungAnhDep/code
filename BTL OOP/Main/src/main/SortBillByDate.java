package main;
import javax.swing.*;
import java.util.ArrayList;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Collections;
import java.util.Date;

public class SortBillByDate {
    private JTextArea resultTextArea; // Added JTextArea

    public SortBillByDate(ArrayList<Bill> billList, JTextArea resultTextArea) {
        this.resultTextArea = resultTextArea; // Store the JTextArea
        sortBillsByDate(billList);
        displayResults(billList);
    }

    public static void sortBillsByDate(ArrayList<Bill> billList) {
        Collections.sort(billList, (bill1, bill2) -> {
            try {
                SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
                Date date1 = sdf.parse(bill1.getDate());
                Date date2 = sdf.parse(bill2.getDate());
                return date1.compareTo(date2);
            } catch (ParseException e) {
                e.printStackTrace();
                return 0;
            }
        });
    }

    public void displayResults(ArrayList<Bill> billList) {
        resultTextArea.setText("Sorted Bills by Date:\n");
        for (Bill bill : billList) {
            resultTextArea.append(bill.toString() + "\n");
        }
    }
}
