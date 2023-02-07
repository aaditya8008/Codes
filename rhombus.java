import java.util.*;
public class rogh{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int s=0;
    
            
            
        for(int i=1;i<=n;i++){
           
        for(int j=1;j<=2*(n-i);j++){
         System.out.print(" ");
        }
        
            for(int c=1;c<=n;c++){
                System.out.print("*");
                }
        
        System.out.print("\n");
        }
       

    }
}

    
