import java.util.*;

public class A {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for(int i = 0;i<t;i++) {
			String s = in.next();
			int sum1 = Integer.parseInt(s.substring(0,1))+Integer.parseInt(s.substring(1,2))+Integer.parseInt(s.substring(2,3));
			int sum2 = Integer.parseInt(s.substring(3,4))+Integer.parseInt(s.substring(4,5))+Integer.parseInt(s.substring(5,6));
			if(sum1 == sum2) {
				System.out.println("YES");
			}else {
				System.out.println("NO");
			}
		}
	}
}
