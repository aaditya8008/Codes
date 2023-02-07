import java.util.*;
public class rogh{
    public static int fct(int n){
       int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        
    }return fact;}
public static int result(int n,int r){
int N=fct(n);
int R=fct(r);
int N_r=fct(n-r);
int res=N/(N_r*R);
return res;

}
    
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int r=sc.nextInt();
    System.out.print(result(n,r));


    }
}