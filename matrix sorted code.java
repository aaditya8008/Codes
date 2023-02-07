import java.util.Arrays;
import java.util.*;
public class rogh{
    public static boolean max(int arr[][],int r,int c){
        int key=33;
        int row=0,column=c-1;
        while(row<r&&column>=0){
        if(arr[row][column]==key){
            System.out.println(row+","+column);
            return true;
        }
        else if(key<arr[row][column]){
            column--;
        }

        else
        row++;





        }
        return false;

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

            

