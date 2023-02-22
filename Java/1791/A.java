    import java.util.*;
     
    public class A{
        public static void main(String[] args){
            Scanner in = new Scanner(System.in);
            int t = in.nextInt();
            String cf = "codeforces";
            int pd = 0;
            for(int i = 0;i<t;i++) {
            	char[] a = new char[t];
            	a[i]=in.next().charAt(0);
            	for(int j = 0;j<cf.length();j++) {
            		if(a[i]==cf.charAt(j)) {
            			pd++;
            		}
            	}
            	if(pd>0) {
            		System.out.println("YES");
            		pd = 0;
            	}else {
            		System.out.println("NO");
            	}
            }
        }
    }
