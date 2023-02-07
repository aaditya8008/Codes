import java.util.*;
public class rogh{
    public static void prsum(int n,int arr[]){
        int temp=0,minpos;
     for(int i=0;i<n;i++){
       minpos=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                minpos=j;
            }
        }
         temp=arr[minpos];
        arr[minpos]=arr[i];
        arr[i]=temp;

     }
    

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
