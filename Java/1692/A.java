    import java.util.*;
                 
    public class A{
        public static void main(String[] args){
            Scanner in = new Scanner(System.in);
            int t = in.nextInt();
            int[] nums = new int[4];
            for(int i = 0;i<t;i++) {
            	nums[0]=in.nextInt();
            	nums[1]=in.nextInt();
            	nums[2]=in.nextInt();
            	nums[3]=in.nextInt();
            	int a = nums[0];
        		Arrays.sort(nums);
            	for(int j = 0;j<4;j++) {
            		if(a == nums[j]) {
            			System.out.println(3 - j);
            			break;
            		}
            	}
            }
        }
    }
