import java.util.*;
             
public class A{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        String s1 = "YES";
        for(int i = 0;i<t;i++) {
        	String s=in.next();
        	if(s.toUpperCase().equals(s1)) {
        		System.out.println("YES");
        	}else {
        		System.out.println("NO");
        	}
        }
    }
}
