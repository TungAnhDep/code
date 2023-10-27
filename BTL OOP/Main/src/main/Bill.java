package main;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;

public class Bill {
    private String customerCode;
    private String ticketCode;
    private String seatType;
    private String date;
    private int quantity;
    private String firstName,lastName;
    private double price;
    public Bill(String customerCode, String ticketCode, String seatType, String date, int quantity,String firstName,String lastName, double price) {
        this.customerCode = customerCode;
        this.ticketCode = ticketCode;
        this.seatType = seatType;
        this.date = date;
        this.quantity = quantity;
        this.firstName=firstName;
        this.lastName=lastName;
        this.price = price;
    }
    public String toString(){
        return "Customer code: "+customerCode +", Customer's First Name: "+firstName +", Customer's last name: " + lastName + "\nTicket code: " + ticketCode +", "
                +"Seat type: " + seatType +", " + "Date purchased: " + date +", Number of tickets bought: " + quantity+", Total Price: "+(int)(price*quantity) +"\n";
    }
    public String getCustomerCode() {
        return customerCode;
    }
    public double getPrice(){
        return price;
    }
    public String getTicketCode() {
        return ticketCode;
    }

    public String getSeatType() {
        return seatType;
    }

    public String getDate() {
        return date;
    }

    public int getQuantity() {
        return quantity;
    }

    public String getFirstName() {
        return firstName;
    }
    public String getLastName(){
        return lastName;
    }
}
