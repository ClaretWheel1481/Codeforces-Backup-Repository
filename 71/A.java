    import java.util.*;
     
    public class main{
        public static void main(String[] args){
            Scanner in = new Scanner(System.in);
            int n = in.nextInt();
            for(int i = 0 ;i< n;i++){
                String str = in.next();
                int strls = str.length();
                if(strls-1 < 10) {
                	System.out.println(str);
                }else {
                	System.out.printf("%s%s%s\n",str.charAt(0),strls-2,str.charAt(strls-1));
                }
            }
        }
    }
