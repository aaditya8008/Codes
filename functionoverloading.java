import java.util.*;
public class rogh{
    public static float sum (float a,float b){
    return a+b;
    }
    public static int sum (int a,int  b){
        return a+b;
        }

public static int sum (int a,int  b,int c){
        return a+b+c;
        }
        public static float sum (float a,float  b,float c){
            return a+b+c;
            }
            public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            float a=sc.nextFloat();
            float b=sc.nextFloat();
            float c=sc.nextFloat();
            System.out.println(sum(a,b));
            System.out.println(sum(a,b,c));

            }
}