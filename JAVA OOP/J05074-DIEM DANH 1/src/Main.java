import java.util.Scanner;
import java.lang.*;
class SV{
    String id,name,lop,note;
    int diem;
    String ghichu;
    SV(String id, String name, String lop){
        this.id=id;
        this.name=name;
        this.lop=lop;
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        SV[] a = new SV[n];
        for (int i=0;i<n;i++){
            a[i]=new SV(sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        while (n-->0){
            String msv = sc.next();
            String soBuoi=sc.next();
            String ghichu="";
            int cntM=0, cntV=0;
            for (int i=0;i<soBuoi.length();i++){
                if (soBuoi.charAt(i)=='v'){
                    cntV++;
                }
                else if (soBuoi.charAt(i)=='m'){
                    cntM++;
                }
            }
            int diem=10-cntV*2-cntM;
            if (diem<0) diem=0;
            if (diem==0){
                ghichu="KDDK";
            }
            for (SV x:a){
                if (x.id.equals(msv)){
                    x.diem=diem;
                    x.ghichu=ghichu;
                }
            }
        }
        for (SV x:a){
            System.out.println(x.id + " " + x.name+" " + x.lop +" " + x.diem +" " + x.ghichu);

        }
    }
}