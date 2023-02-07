import java.util.Arrays;
import java.util.Scanner;
public class rogh{
    public static int clear(int n){
        int count=0;
        for(int i=0;n!=0;i++){
           if((n&1)!=0)
           count++;

          n= n>>1;
        }
       return count;
    }
    
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
       
       int n=sc.nextInt();
       
       
       
       

       System.out.print(clear(n));
    return ;
       

    }

    }

    

