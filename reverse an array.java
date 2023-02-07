import java.util.*;
public class rogh{
    public static void update(int marks[],int n){
        int l;
         
        for(int i=0;i<n/2;i++){
        l=marks[i];
        marks[i]=marks[(n-1)-i];
        marks[(n-1)-i]=l;
         }
         
         
         
    }
public static void main(String args[]){
    int marks[]=new int[100];
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
for(int i=0;i<n;i++){
    marks[i]=sc.nextInt();
}
update(marks,n);
for(int i=0;i<n;i++){
System.out.println(marks[i]);


}}}


