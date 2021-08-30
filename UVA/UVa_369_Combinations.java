
import java.math.BigInteger;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    BigInteger[] ara = new BigInteger [101];
    ara[0] = BigInteger.ONE;
    ara[1] = BigInteger.ONE;
    int i,r,n;
    for(i=2; i<=100; i++) ara[i]= ara[i-1].multiply(BigInteger.valueOf((long)i));
    while(sc.hasNext()){
    n = sc.nextInt();
    r = sc.nextInt();
    if(n==0 && r==0) break;
    BigInteger x = ara[n-r].multiply(ara[r]);
    x = ara[n].divide(x);
    System.out.println(n+" things taken "+r+" at a time is "+x+" exactly.");
    }
    }
}
