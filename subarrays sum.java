import java.util.*;
public class rogh{
    public static void prsum(int n,int arr[]){
    int mxsum=Integer.MIN_VALUE,sum=0;
     for(int i=0;i<n;i++){
        System.out.println("Elements of:"+arr[i]);
     for(int j=i;j<n;j++){
        sum=0;
     for(int c=i;c<=j;c++){
        sum+=arr[c];
    System.out.print(arr[c]+" ");
     }
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