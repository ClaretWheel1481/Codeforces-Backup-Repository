import java.util.*;
             
public class A{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String PI = "314159265358979323846264338327";
        int t = in.nextInt();
        for(int i = 0;i<t;i++) {
        	String n = in.next();
        	int sum = 0;
        	for(int j = 0;j<n.length();j++) {
        		if(n.charAt(0) != PI.charAt(0)) {
        			sum = 0;
        			break;
        		}
        		if(n.charAt(j) == PI.charAt(j)) {
        			sum++;
        		}else if(n.charAt(j) != PI.charAt(j)) {
        			break;
        		}
        	}
        	System.out.println(sum);
        }
    }
}
