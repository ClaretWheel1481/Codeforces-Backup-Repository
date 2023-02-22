    import java.util.*;
     
    public class B{
        public static void main(String[] args){
            Scanner in = new Scanner(System.in);
            int t = in.nextInt();
            int col = 0,row=0;
            int pd = 0;
            for(int i = 0;i<t;i++) {
            	int n = in.nextInt();
            	String s = in.next();
            	for(int j = 0;j<s.length();j++) {
                	switch(s.charAt(j)) {
                	case 'L':
                		row--;
                		break;
                	case 'R':
                		row++;
                		break;
                	case 'U':
                		col++;
                		break;
                	case 'D':
                		col--;
                		break;
                	}
                	if(col == 1 && row == 1) {
                		pd++;
                	}
                }
            	if(pd > 0) {
            		System.out.println("YES");
            		col = 0;
            		row = 0;
            		pd = 0;
            	}else {
            		col = 0;
            		row = 0;
            		System.out.println("NO");
            	}
            }
        }
    }
