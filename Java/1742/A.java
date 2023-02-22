import java.util.*;

public class A {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for(int i = 0;i<t;i++) {
			int a = in.nextInt();
			int b = in.nextInt();
			int c = in.nextInt();
			if(a+b == c) {
				System.out.println("YES");
				continue;
			}else if(a+c == b) {
				System.out.println("YES");
				continue;
			}else if(c + b == a) {
				System.out.println("YES");
				continue;
			}else {
				System.out.println("NO");
				continue;
			}
		}
	}
}
