import java.util.Scanner;
import java.lang.*;
class Point{
    private double x,y;
    Point(){
        x=1;y=1;
    }
    Point(double x, double y){
        this.x=x;
        this.y=y;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double distance(Point secondPoint){
        return Math.sqrt(Math.pow(this.x- secondPoint.x,2) +Math.pow(this.y- secondPoint.y,2));
    }
    double distance(Point p1, Point p2){
        return Math.sqrt(Math.pow(p1.x-p2.x,2)+Math.pow(p1.y-p2.y,2));
    }
    public String toString(){
        return x+" " +y;
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            double x = sc.nextDouble();
            double y = sc.nextDouble();
            Point p1 = new Point(x,y);
            x=sc.nextDouble();
            y=sc.nextDouble();
            Point p2 = new Point(x,y);
            x=sc.nextDouble();
            y=sc.nextDouble();
            Point p3 = new Point(x,y);
            double a = p1.distance(p2);
            double b = p2.distance(p3);
            double c = p3.distance(p1);
            if (a==0||b==0||c==0||a+b<=c||a+c<=b||b+c<=a){
                System.out.println("INVALID");
            }
            else{
                System.out.printf("%.3f\n",a+b+c);
            }
        }
    }
}