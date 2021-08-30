

import java.math.BigInteger;
import java.util.Scanner;


public class Product10106 {
    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        
       String s1,s2;
        while(sc.hasNext()){
            s1 = sc.next();
            s2 = sc.next();
            BigInteger b1 = new BigInteger(s1);
            BigInteger b2 = new BigInteger(s2);
            BigInteger b3 = b1.multiply(b2);
            System.out.println(b3.toString());
        }
    }
}
