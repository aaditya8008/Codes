import java.util.*;
public class rogh{
    public static void presum(int n,int arr[]){
        int sum=0,mxsum=Integer.MIN_VALUE;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
     for(int i=0;i<n;i++){
        System.out.print(arr[i]);
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
            

            presum(n,arr);
            
    }}
