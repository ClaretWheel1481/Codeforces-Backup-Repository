import java.util.*;
//请使用Java 17运行否则超时。
public class B {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for (int i = 0; i < t; i++) {
			int flag = 0;
			int sum = 1;
			int k = in.nextInt();
			int[] nums = new int[k];
			for (int j = 0; j < k; j++) {
				nums[j] = in.nextInt();
			}
			Arrays.sort(nums);
			for (int j = 1; j < k; j++) {
				if (nums[j] == nums[j - 1]) {
					sum++;
				}else {
					sum = 1;
				}
				if (sum >= 3) {
					System.out.println(nums[j]);
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				System.out.println(-1);
			}
		}
	}
}
