import java.util.Arrays;
import java.util.*;
public class rogh{
    public static void prsum(int n,int arr[]){
       Arrays.sort(arr,0,3);//Arrays.sort(arr,0,3,Collections.reverseOrder()); for decending,int to Integer

     for(int i=0;i<n;i++){
        System.out.print(arr[i]+" ");
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
            

            prsum(n,arr);
            
    }}
