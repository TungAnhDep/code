import java.io.File;
import java.util.Arrays;
import java.util.Scanner;
import java.lang.*;
import java.io.FileNotFoundException;
class Subject implements Comparable<Subject>{
    String ma,ten,hinhthuc;
    Subject (String ma, String ten, String hinhthuc){
        this.ma=ma;
        this.ten=ten;
        this.hinhthuc=hinhthuc;
    }
    public int compareTo(Subject p){
        return (this.ma.compareTo(p.ma) ) ;

    }
    public String toString(){
        return this.ma +" " + this.ten + " " + this.hinhthuc;
    }
}
public class Main {
    public static void main (String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int n = sc.nextInt();
        sc.nextLine();
        Subject[] p = new Subject[n];
        for (int i=0;i<n;i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String hinhthuc = sc.nextLine();
            p[i] = new Subject(ma,ten,hinhthuc);
        }
        Arrays.sort(p);
        for (int i=0;i<n;i++){
            System.out.println(p[i]);
        }
    }
}