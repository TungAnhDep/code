import java.util.Scanner;
import java.lang.*;
class SV{
    private String ten,ns;
    float d1,d2,d3;
    SV(){
        ten=""; ns="";
        d1=0;d2=0;d3=0;
    }
    SV(String ten, String ns, float d1, float d2, float d3){
        this.ten=ten;
        this.ns = ns;
        this.d1 = d1;
        this.d2 = d2;
        this.d3 = d3;
    }
    void in(){
        System.out.println(this.ten + " " + this.ns +" " + (this.d1+this.d2+this.d3));
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ten = sc.nextLine();
        String ns = sc.nextLine();
        float d1 = sc.nextFloat();
        float d2 = sc.nextFloat();
        float d3 = sc.nextFloat();
        SV p = new SV(ten,ns,d1,d2,d3);
        p.in();
    }
}