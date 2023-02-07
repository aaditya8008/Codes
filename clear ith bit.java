import java.util.Arrays;
import java.util.Scanner;
public class rogh{
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
       
       int n=sc.nextInt();
       int i=sc.nextInt();
       int xor=~(1<<i);
       System.out.println((n&xor));
       return ;
       

    }

    }