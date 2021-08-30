
package UVA;

import java.math.BigInteger;
import java.util.Scanner;


public class UVa_10523_Very_Easy_ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,i;
        while(sc.hasNext()){
            n = sc.nextInt();
            BigInteger a = sc.nextBigInteger();
            BigInteger sum = BigInteger.ZERO;
            BigInteger bi,power;
          for(i=1; i<=n; i++){
              bi = BigInteger.valueOf(i);
               power = bi.multiply(a.pow(i));
                sum = sum.add(power);
          }
            System.out.println(sum);
        }
    }
}
