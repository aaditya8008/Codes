import java.util.Arrays;
import java.util.Scanner;
public class rogh{
    public static void print(String str){
        int x=0,y=0;
for(int i=0;i<str.length();i++){
    if(str.charAt(i)=='w'||str.charAt(i)=='W')
    x--;
    else if(str.charAt(i)=='e'||str.charAt(i)=='E')
    x++;
    else if(str.charAt(i)=='n'||str.charAt(i)=='N')
    y++;
    else if(str.charAt(i)=='w'||str.charAt(i)=='W')
    y--;
}
int X=x*x;
int Y=y*y;
System.out.println((int)Math.sqrt(X+Y));

    }
    public static void main(String args[]){
       char arr[]={'a','b','c','d'};
       
       String str2=new String("xyz");
       Scanner sc=new Scanner(System.in);
       
       String str=sc.nextLine();
       StringBuilder sb=new StringBuilder();

        print(str);
      for(char ch='a';ch<='z';ch++){
      sb.append(ch);

      }
       System.out.println(sb);
      
    }

    }

    

