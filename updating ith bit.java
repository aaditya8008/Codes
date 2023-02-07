import java.util.Arrays;
import java.util.Scanner;
public class rogh{
    public static void clear(int n,int i){
        int xor=~(1<<i);
        System.out.println((n&xor));

    }
    public static void set(int n,int i){
        
        System.out.println((n|1<<i));

    }
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
       
       int n=sc.nextInt();
       int i=sc.nextInt();
       int newbit=sc.nextInt();
       if(newbit==0)
       clear(n,i);
       else if(newbit==1)
       set(n,i);

       
       return ;
       

    }

    }

    

