import java.util.Arrays;
import java.util.*;
public class rogh{
    public static void max(int arr[][],int r,int c){
        int sum=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j)
            sum+=arr[i][j];
        }}
        System.out.println(sum);
        int osum=0;
        for(int i=0;i<r;i++){
            for(int j=c-1;j>=0;j--){
                if(i+j==r-1)
            osum+=arr[i][j];
        }}
        System.out.println(osum);
        }
        
    
    

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        
        System.out.println("Enter elements:\n");
        
        int arr[][]=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
        arr[i][j]=sc.nextInt();
        }}
        System.out.println("Elements:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
            System.out.print(arr[i]);
                }}
            System.out.print("\n");
            max(arr,r,c);
        }
    }

            

