import java.util.*;

public class A {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for(int i = 0;i<t;i++) {
			int[] nums = new int[3];
			nums[0] = in.nextInt();
			nums[1] = in.nextInt();
			nums[2] = in.nextInt();
			Arrays.sort(nums);
			System.out.println(nums[1]);
		}
	}
}
