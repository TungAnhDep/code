import java.util.Scanner;
import java.lang.*;

public class Main {
    public static int nt(int n){
        for (int i=2;i<=Math.sqrt(n);i++){
            if (n%i==0) return 0;
        }
        if (n>1) return 1;
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0){
            String s = sc.next();
            int n = s.length();
            int cnt1=0,cnt2=0;
            for (int i=0;i<n;i++){
                if (s.charAt(i) == s.charAt(n-i-1)){
                    cnt1++;

                }
                int tmp = s.charAt(i)-'0';
                if (nt(tmp)!=0) cnt2++;
            }
            if (cnt1==n && cnt2==n) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}