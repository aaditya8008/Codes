import java.util.*;
public class rogh{
    public static void prsum(int n,int arr[]){
    int mxsum=Integer.MIN_VALUE,sum=0;
    int prefix[]=new int[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
     prefix[i]=prefix[i-1]+arr[i];
}
     
     for(int i=0;i<n;i++){
        System.out.println("Elements of:"+arr[i]);
     for(int j=i;j<n;j++){
        sum=0;
     
        sum=i==0?prefix[j]:prefix[j]-prefix[i-1];
    System.out.print(arr[j]+" ");
     
     if(sum>mxsum)
     mxsum=sum;

     System.out.print("="+(sum));
     System.out.println();
     }
     System.out.println("Max ="+ mxsum);

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
            
    }
}