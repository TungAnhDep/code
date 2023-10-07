import java.util.Scanner;
import java.lang.*;
class NV{
    private String mnv,name,gt,ns,dc,mst,nk;
   public NV(String mnv,String name, String gt,String ns, String dc, String mst, String nk){
        this.mnv=mnv;
        this.name=name;
        this.gt=gt;
        this.ns=ns;
        this.dc=dc;
        this.mst=mst;
        this.nk=nk;
    }
    public String toString(){
       return this.mnv + " " + this.name +" " + this.gt +" " + this.ns + " " +this.dc +" " + this.mst +" " + this.nk;
     }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String mnv = "00001";
        String name = sc.nextLine();
        String gt = sc.nextLine();
        String ns = sc.nextLine();
        String dc = sc.nextLine();
        String mst = sc.nextLine();
        String nk = sc.nextLine();
        NV p = new NV(mnv,name,gt,ns,dc,mst,nk);
        System.out.println(p);
    }
}