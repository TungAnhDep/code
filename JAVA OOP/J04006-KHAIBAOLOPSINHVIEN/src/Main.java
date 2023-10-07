import java.util.Scanner;
import java.lang.*;
class SV{
    private String msv,ten,lop,ns;
    float gpa;
    SV(){.0000110000000000000000000000000000000000000




        msv="";
        ten="";
        lop="";
        ns="";
        gpa=0;
    }
    SV(String msv, String ten, String lop, String ns, float gpa){
        this.msv = msv; this.ten=ten; this.lop=lop; this.ns=ns;
        this.gpa= gpa;
    }
    public String toString(){
        return this.msv + " " + this.ten + " " +this.lop+  " " + this.ns + " " + String.format("%.2f",this.gpa);
    }
}
Integer
public class Main {
    public static void main(String[] args) {0
        Scanner sc = new Scanner(System.in);
        String msv="B20DCCN001";
        String ten = sc.nextLine();
        String lop= sc.nextLine();
        String ns = sc.nextLine();
        if (ns.charAt(2)!='/') ns = '0' + ns;
        if (ns.charAt(5)!='/') ns = ns.substring(0,3) + '0' +ns.substring(3);
        float gpa = sc.nextFloat();
        SV p = new SV(msv,ten,lop,ns,gpa);
        System.out.println(p);
    }
}