import java.util.Arrays;
import java.util.*;
public class rogh{
    public static void max(int arr[],int n){
        int bprice=Integer.MAX_VALUE;
        
        int max=Integer.MIN_VALUE,p;
        for(int i=0;i<n;i++){
          if(bprice<arr[i]){
          p=arr[i]-bprice;
          max=Math.max(max,p);

        }
else if(bprice>arr[i])
bprice=arr[i];


    }
    System.out.print(max);}

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        
        System.out.println("Enter elements:\n");
        
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            
        arr[i]=sc.nextInt();
        }
        System.out.println("Elements:\n");
        for(int i=0;i<n;i++){
            
            System.out.print(arr[i]);
            }
            System.out.print("\n");
            max(arr,n);
        }
    }

            

