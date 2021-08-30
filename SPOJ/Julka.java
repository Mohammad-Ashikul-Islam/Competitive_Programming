import java.math.BigInteger;
import java.util.Scanner;

public class Hello_World {
 public static void main(String[] args) {
	 
	 Scanner sc=new Scanner(System.in);
	int t=10,i;
	for(i=1; i<=10; i++) {
		BigInteger a,b,c;
		a = sc.nextBigInteger();
		b = sc.nextBigInteger();
		a = a.subtract(b);
		a = a.divide(BigInteger.valueOf(2L));
		b = a.add(b);
		System.out.println(b);
		System.out.println(a);
		
	}
}
}
