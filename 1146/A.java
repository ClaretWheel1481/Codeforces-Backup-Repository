import java.util.*;
 
public class A {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String str = in.next();
		int sum = 0;
		char[] strs = new char[str.length()];
		for(int i = 0;i<str.length();i++) {
			strs[i] = str.charAt(i);
			if(strs[i] == 'a') {
				sum++;
			}
		}
		System.out.println(Math.min(str.length(),2*sum-1));
	}
}
