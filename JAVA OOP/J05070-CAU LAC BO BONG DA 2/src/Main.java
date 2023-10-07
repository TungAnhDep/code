import java.util.Arrays;
import java.util.Scanner;
import java.lang.*;
class CLB implements Comparable<CLB>{
    String id,name;
    int price,noMatch;
    int income;
    String idTran; int so;
    CLB(String id, String name, int price){
        this.id=id;
        this.name=name;
        this.price=price;

    }
    CLB(String id, String name, int income,String idTran,int so){
        this.id=id;
        this.name=name;
        this.income=income;
        this.idTran=idTran;
        this.so=so;
    }
    @Override
    public int compareTo(CLB o) {
        if (this.income!=o.income) return o.income-this.income;
        else return this.name.compareTo(o.name);
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        CLB [] a = new CLB[n];
        for (int i=0;i<n;i++){
            a[i]=new CLB(sc.nextLine(),sc.nextLine(),sc.nextInt());
            sc.nextLine();
        }
        int q = sc.nextInt();
        CLB [] b = new CLB[q];
        while (q-->0){
            String idMatch=sc.next();
            int noPeople=sc.nextInt();
            for (int i=0;i<n;i++){
                if (idMatch.contains(a[i].id)){
                    a[i].income=noPeople*a[i].price;
                }
            }

            for (int i=0;i<n;i++){
                if (idMatch.contains(a[i].id)){
                    b[i]=new CLB(a[i].id,a[i].name,a[i].income,idMatch,noPeople);
                }
            }

        }
        Arrays.sort(b);
        for (CLB x:b){
            System.out.println(x.idTran+" " + x.name +" " + x.income);
        }
    }
}