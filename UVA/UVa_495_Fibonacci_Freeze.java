
package UVA;

import java.math.BigInteger;
import java.util.Scanner;


public class UVa_495_Fibonacci_Freeze {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        while(sc.hasNext()){
            n=sc.nextInt();
            if(n==0) System.out.println("0");
            else if(n==1) System.out.println("1");
            else if(n==2) System.out.println("1");
            else{
                BigInteger f1=BigInteger.ONE;
                BigInteger f2=BigInteger.ONE;
                BigInteger f = BigInteger.ZERO;
                for(int i=3; i<=n; i++){
                    f = f1.add(f2);
                    f1 = f2;
                    f2 = f;
                }
                System.out.println(f);
            }
        }
    }
}
