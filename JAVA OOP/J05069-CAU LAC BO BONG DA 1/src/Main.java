import java.util.Scanner;
import java.lang.*;
class CLB{
    String id,name;
    int price,noMatch;
    int income;
    CLB(String id, String name, int price){
        this.id=id;
        this.name=name;
        this.price=price;

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
        while (q-->0){
            String idMatch=sc.next();
            int noPeople=sc.nextInt();
            for (int i=0;i<n;i++){
                if (idMatch.contains(a[i].id)){
                    a[i].income=noPeople*a[i].price;
                    System.out.println(idMatch + " " + a[i].name + " " + a[i].income);
                }
            }
        }
    }
}