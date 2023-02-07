import java.util.*;
public class rogh{
    public static int lar(int arr[],int n){
    int largest=Integer.MIN_VALUE;  //for max Integer.MAX_VALUE
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    return largest;


    }


    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            System.out.print(arr[i]);
            }
            System.out.print("\n");
            

            System.out.print(lar(arr,n));
            
    }
}