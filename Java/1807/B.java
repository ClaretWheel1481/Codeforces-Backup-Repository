import java.util.*;
 
public class Main {
	public static void panduan(int[] nums1) {
		int Mihai = 0,Bianca = 0;
		for(int i : nums1) {
			if(i == 1 || i % 2 ==1) {
				Bianca+=i;
			}else {
				Mihai+=i;
			}
		}
		if(Mihai > Bianca) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for(int i = 0;i < t ;i++) {
			int n = in.nextInt();
			int[] nums = new int[n];
			for(int j = 0;j < n;j++) {
				nums[j] = in.nextInt();
			}
			panduan(nums);
		}
	}
}
