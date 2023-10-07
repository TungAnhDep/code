import java.util.Scanner;
import java.lang.*;
class PS{
    private double x,y;
    PS(){
        x=1;
        y=1;
    }
    PS(double x, double y){
        this.x=x;
        this.y=y;
    }
    double gcd(double a, double b){
        if (b==0) return a;
        return gcd(b,a%b);
    }
}
public class Main {
    static double gcd(double a, double b){
        if (b==0) return a;
        return gcd(b,a%b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        double y = sc.nextDouble();
        PS p1 = new PS(x,y);
        double g1 = p1.gcd(x,y);
        double rutgontu1=x/g1;
        double rutgonmau1=y/g1;
        x=sc.nextDouble();
        y=sc.nextDouble();
        PS p2 = new PS(x,y);
       double g2 = p2.gcd(x,y);
       double rutgontu2 = x/g2;
       double rutgonmau2 = y/g2;
       double kqtu=rutgontu1*rutgonmau2+rutgontu2*rutgonmau1;
       double kqmau=rutgonmau1*rutgonmau2;
       double g3 = gcd(kqtu,kqmau);
       kqtu/=g3;
       kqmau/=g3;
       System.out.printf("%.0f/%.0f\n",kqtu,kqmau);
//       System.out.println(rutgontu1*rutgonmau2+rutgontu2*rutgonmau1+"/"+rutgonmau1*rutgonmau2);
    }

}