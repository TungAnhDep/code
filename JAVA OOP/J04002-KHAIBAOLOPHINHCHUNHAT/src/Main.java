import java.util.Scanner;
import java.lang.*;
class Rectangle{
    private double width, height;
    private String color;
    Rectangle(){
        width=1;
        height=1;
    }
    Rectangle(double width, double height, String color){
        this.width=width;
        this.height=height;
        this.color=color;
    }
    double getWidth(){
        return width;
    }
    void setWidth(double width){
        this.width = width;
    }
    double getHeight(){
        return height;
    }
    void setHeight(double height){
        this.height = height;
    }
    String getColor(){
        return color;
    }
    void setColor(String color){
        this.color = color;
    }
    double findArea(){
        return this.width * this.height;
    }
    double findParameter(){
        return 2 * (this.width + this.height);
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        double y = sc.nextDouble();
        String color = sc.next();
        if (x<=0 || y<=0) System.out.println("INVALID");
        else{
            Rectangle a = new Rectangle(x,y,color);
            String mau = a.getColor();
            mau = mau.substring(0,1).toUpperCase() + mau.substring(1).toLowerCase();
            System.out.printf("%.0f %.0f %s\n", a.findParameter(), a.findArea(), mau);
        }
    }
}