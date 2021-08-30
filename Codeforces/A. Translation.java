
import java.util.Scanner;



public class Solving {

    
    public static void main(String[] args) {
        String s,p;
        Scanner sc= new Scanner(System.in);
        s = sc.nextLine();
        p = sc.nextLine();
        String r = new StringBuffer(s).reverse().toString();
        if(p.compareTo(r)==0) System.out.println("YES");
        else System.out.println("NO");;
    }
    
}
