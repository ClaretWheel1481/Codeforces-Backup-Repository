import java.util.*;

public class C{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int tc = in.nextInt();
        int[] strls = new int[tc];
        int left = 0,right = 0;
        int left1 = 0,right1= 0;
        int sum = 0;
        String[] str = new String[tc];
        for(int i = 0;i<tc;i++) {
        	strls[i] = in.nextInt();
        	str[i] = in.next();
        }
        for(int i = 0;i<tc;i++) {
        	left = 0;
        	right = strls[i] -1;
        	while(left<right) {
            	left1 = str[i].charAt(left);
            	right1 = str[i].charAt(right);
            	if(left1 == right1) {
            		break;
            	}else if(left1 != right1) {
            		sum+=2;
            		left++;
            		right--;
            	}
            }
        	System.out.println(strls[i] - sum);
        	sum = 0;
        }
        
    }
}
