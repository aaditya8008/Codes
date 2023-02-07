import java.util.Arrays;
import java.util.*;
public class rogh{
    public static void max(int arr[],int n){
        int larr[]=new int[n];
        int rarr[]=new int[n];
        
       
        larr[0]=arr[0];
     for(int i=1;i<n;i++){
        larr[i]=Math.max(arr[i],larr[i-1]);
     }
     
     
        rarr[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            rarr[i]=Math.max(arr[i],rarr[i+1]);
         }
         System.out.print("Left max:\n");
         for(int i=0;i<n;i++){
        System.out.print(larr[i]+"\n");}
         System.out.print("Right max:\n");
         for(int i=0;i<n;i++){
        System.out.print(rarr[i]+"\n");
           }
           int trapwt[]=new int[n];
           int trappedwater=0;
           for(int i=0;i<n;i++){
            int waterlevel =Math.min(larr[i],rarr[i]);
             trapwt[i]=waterlevel-arr[i];
              trappedwater += (waterlevel-arr[i]);}
              for(int i=0;i<n;i++){
                System.out.print(trapwt[i]+"\n");
                   }
                   System.out.print(trappedwater+"\n");
    }

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
          
            

