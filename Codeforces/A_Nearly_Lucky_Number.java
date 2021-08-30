
import java.util.Scanner;



public class A_Nearly_Lucky_Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
        s = sc.nextLine();
        int i,c=0,temp=0,x,y;
        for(i=0; i< s.length(); i++){
            if(s.charAt(i)=='4' || s.charAt(i)=='7') c++;
        }
        y = c;
        while((c != 0)==true){
            x = c % 10;
            if(x != 4 && x != 7) {
                temp=1; break;
            }
            c = c/10;
        }
        if(y==0) System.out.println("NO");
        else if(temp==0) System.out.println("YES");
        else System.out.println("NO");
    }
}
