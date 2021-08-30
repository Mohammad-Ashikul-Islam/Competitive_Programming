

import java.util.Scanner;


public class Solving_1 {

    
    public static void main(String[] args) {
            String s;
            Scanner sc= new Scanner(System.in);
            s = sc.nextLine();
            int u=0,l=0;
    for(int i=0; i<s.length(); i++){
        if(s.charAt(i)>='A' && s.charAt(i)<='Z') u++;
        else l++;
    }
    if(l>=u) System.out.println(s.toLowerCase());
    else System.out.println(s.toUpperCase());
    }
}
