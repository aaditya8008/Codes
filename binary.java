import java.util.*;
public class rogh{
    public static int bin(int arr[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
    int mid=(e+s)/2;
    if(key==arr[mid]){
    return mid;}
    if(key>arr[mid]){
    arr[s]=mid+1;}
    if(key<arr[mid]){
    arr[e]=mid-1;}

    }
    return -1;
    }

    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.print("Enter key:\n");
        int key =sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            System.out.print(arr[i]);
            }
            System.out.print("\n");
            

            System.out.print(bin(arr,n,key));
            
    }
}