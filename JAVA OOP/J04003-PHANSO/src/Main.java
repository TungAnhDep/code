import java.awt.*;
import java.util.Scanner;
import java.lang.*;
class PhanSo{
    private double tu,mau;
    PhanSo(){
        tu=0; mau=1;
    }
    PhanSo(double tu, double mau){
        this.tu=tu;
        this.mau=mau;

    }
    double gcd(double a, double b){
        if (b==0) return a;
        return gcd(b,a%b);
    }


}

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double tu = sc.nextDouble();
        double mau = sc.nextDouble();
        PhanSo p = new PhanSo(tu,mau);
        double g = p.gcd(tu,mau);
        double rutgontu=tu/g;
        double rutgonmau=mau/g;
        System.out.printf("%.0f/%.0f\n",rutgontu,rutgonmau);

    }
}