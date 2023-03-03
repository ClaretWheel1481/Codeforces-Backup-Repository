import java.util.*;

public class B {
	
	public static int solve(int []nums) {
		Arrays.sort(nums);
		int sum = 0;
		for(int i  = 0;i<nums.length;i++) {
			sum+=nums[i]-nums[0];
		}
		return sum;
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for(int i = 0;i<t;i++) {
			int n = in.nextInt();
			int []nums = new int[n];
			for(int j = 0;j<n;j++) {
				nums[j] = in.nextInt();
			}
			System.out.println(solve(nums));
		}
	}
}
