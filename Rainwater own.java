import java.util.Arrays;
import java.util.*;
public class Rainwaterown{
    public static void max(int arr[],int n){
        int larr[]=new int[n];
        int rarr[]=new int[n];
        
        int mx=Integer.MIN_VALUE;
        
     for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
         }
         larr[i]=mx;
     }
     
     
        mx=Integer.MIN_VALUE;
        int j=0;
        for(int i=n-1;i>=0;i--){
            
             if(arr[i]>mx){
                mx=arr[i];
             }
    rarr[j]=mx;
    j++;
            
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
          
            

