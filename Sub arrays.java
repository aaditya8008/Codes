import java.util.*;
public class rogh{
    public static void bin(int arr[],int n){
    for(int i=0;i<n;i++){
        System.out.println("Elements of"+arr[i]+"\n");
        for(int j=i;j<n;j++){
        for(int c=i;c<=j;c++){
            System.out.print(arr[c]+" " );

        }
        System.out.println();
    }
    System.out.println();
    }
    }

    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("Enter elements:\n");
        
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            System.out.print(arr[i]);
            }
            System.out.print("\n");
            

            bin(arr,n);
            
    }
}