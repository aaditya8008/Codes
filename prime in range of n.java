import java.util.*;
public class rogh{
    public static boolean prime(int n){
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    public static void isprime(int n){
        for(int i=2;i<=n;i++){
            if(prime(i)==true)
            System.out.println(i);
        }
    }
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
isprime(n);


    }
}