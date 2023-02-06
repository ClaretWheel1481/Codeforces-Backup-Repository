    import java.util.*;
     
    public class main{
        public static void main(String[] args){
            Scanner in = new Scanner(System.in);
            int n = in.nextInt();
            int k = in.nextInt();
            int sum = 0;
            int[] pscore = new int[n];
            for(int i = 0 ;i< n;i++){
                pscore[i] = in.nextInt();
            }
            for(int i = 0;i<n;i++) {
            	if(pscore[i] >= pscore[k-1] && pscore[i] != 0) {
            		sum++;
            	}
            }
            System.out.println(sum);
        }
    }
