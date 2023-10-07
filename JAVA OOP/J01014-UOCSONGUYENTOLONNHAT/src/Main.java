import java.util.Scanner;
import java.lang.Math;
public class Main {
    public static void main(String[] args) {
        Scanner src = new Scanner(System.in);
        int t = src.nextInt();
        while (t-- >0){
            long n = src.nextLong();
            long a=0;
            for (int i=2;i<=Math.sqrt(n);i++){
                while (n%i==0){
                    n/=i;
                    a=i;
                }
            }
            if (n!=1) a=n;
            System.out.println(a);
        }

    }
}