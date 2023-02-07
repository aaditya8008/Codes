import java.util.Arrays;
import java.util.*;
public class rogh{
    public static void prsum(int n,int arr[]){
       int larg=Integer.MIN_VALUE,j=0;
       for(int i=0;i<n;i++){
        larg=Math.max(larg,arr[i]);
       }
       System.out.println(larg);
       int count[]=new int[larg+1];
       for(int i=0;i<n;i++){
        count[arr[i]]++;
       }
       for(int i=0;i<n;i++){
        while(count[i]>0){
          arr[j]=i;
          j++;
          count[i]--;
          
        }
       }
       for(int i=0;i<n;i++){
        System.out.print(arr[i]);
        }
        System.out.print("\n");

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
