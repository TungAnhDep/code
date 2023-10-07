import java.util.Arrays;
import java.util.Scanner;
import java.lang.*;
class KHO implements Comparable<KHO>{
    String id;
    long no;
    String brand;
    int price;
    double tax,money;
    KHO(String id, int no){
        this.id=id;
        this.no=no;
        if (this.id.endsWith("TN")){

            brand="Trong Nuoc";
            if (this.id.charAt(0)=='X'){
                price=128000;
                tax=0;
                money=price*this.no+tax;
            }
            else if (this.id.charAt(0)=='D'){
                price=11200;
                tax=0;
                money=price*this.no+tax;
            }
            else{
                price=9700;
                tax=0;
                money=price*this.no+tax;
            }
        }
        else {
            if (this.id.charAt(0)=='X'){
                price=128000;
                tax=price*0.03*this.no;
                money=price*this.no+tax;
            }
            else if (this.id.charAt(0)=='D'){
                price=11200;
                tax=price*0.035*this.no;
                money=price*this.no+tax;
            }
            else{
                price=9700;
                tax=price*0.02*this.no;
                money=price*this.no+tax;
            }
            if (this.id.endsWith("BP")) brand="British Petro";
            else if (this.id.endsWith("ES")) brand="Esso";
            else if (this.id.endsWith("SH")) brand ="Shell";
            else if (this.id.endsWith("CA")) brand="Castrol";
            else brand="Mobil";
        }
    }
    public String toString(){
        return id +" " +brand + " " + price + " " + (long)tax + " " + (long)money;
    }
    public int compareTo(KHO other){
        return Double.compare(other.money,this.money);
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        KHO [] a = new KHO[n];
        for (int i=0;i<n;i++){
            a[i]=new KHO(sc.next(),sc.nextInt());

        }
        Arrays.sort(a);
        for (KHO x:a) System.out.println(x);
    }
}