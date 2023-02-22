import java.util.Scanner;
             
public class A{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int input = in.nextInt();
        if(input % 2 == 0 && input != 2){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}
