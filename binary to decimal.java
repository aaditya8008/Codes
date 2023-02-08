import java.util.*;
public class rogh{
    public static double bin(int n){
        int rem,i=0;
        double sum=0;
        while(n!=0){
            rem=n%10;
            sum=sum+(rem*Math.pow(2,i));
            n=n/10;
            i++;
        }
        return sum;
    }
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
System.out.println(bin(n));
}


}