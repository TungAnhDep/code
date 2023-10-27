package main;

public class Ticket {

    private String code;
    private String seatType;
    private double price;
    static int i=0;
    public Ticket(String code, String seatType, double price){
        code = String.format("%03d",i++);
        this.code=code;
        this.seatType=seatType;
        this.price=price;
    }
    public double getPrice(){
        return price;
    }

    public void setCode(String code) {
        this.code=code;
    }

    public void setSeatType(String seatType) {
        this.seatType=seatType;
    }

    public void setPrice(double price) {
        this.price=price;
    }
    public String toString(){
        return "Code: " + code + ", " + "Seat Type: " + seatType +", " +"Price: " + (int)price;
    }
    public String getCode(){
        return code;
    }
    public String getSeatType(){
        return seatType;
    }
}
