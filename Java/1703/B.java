import java.util.*;
             
public class B{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int i = 0;i<t;i++) {
        	int chs = 0;
            int els1 = 0;
        	int n = in.nextInt();
        	String s = in.next();
        	char[] s1 = s.toCharArray();
        	char s2 = '0';
        	Arrays.sort(s1);
        	for(char j : s1) {
        		if(j != s2) {
        			els1++;
        			s2 = j;
        		}else {
        			chs++;
        		}
        	}
        	System.out.println(chs+els1*2);
        }
    }
}
