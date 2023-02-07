import java.util.Arrays;
import java.util.Scanner;
public class rogh{
    public static void clear(int n,int i,int j){
        
        int a=n&((-1)<<(j+1));//or ~0=1111111

    
        int b=(n&((1<<i)-1));
        System.out.print(a|b);
    }
    
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
       
       int n=sc.nextInt();
       int i=sc.nextInt();
       int j=sc.nextInt();
       
       clear(n,i,j);
       
       

       
       return ;
       

    }

    }

    

