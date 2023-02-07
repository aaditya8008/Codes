import java.util.Arrays;
import java.util.*;
public class rogh{
    public static void max(int arr[][],int r,int c){
        int sr=0,sc=0;
        int er=r-1,ec=c-1;
        while(sc<=ec&&sr<=er){
        for(int i=sr;i<=er;i++){
            System.out.print(arr[sr][i]+" ");
        }
        System.out.println();
        for(int i=sc;i<=ec;i++){
            System.out.print(arr[i][ec]+" ");
        }System.out.println();
        for(int i=er;i>=sr;i--){
            System.out.print(arr[er][i]+" ");
        }System.out.println();
        for(int i=ec;i>=sc;i--){
            System.out.print(arr[i][sc]+" ");
        }System.out.println();
        sr=sr+1;
        sc=sc+1;
        er=er-1;
        ec=ec-1;
        

        }
        
    
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

            

