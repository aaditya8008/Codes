import java.util.Arrays;
import java.util.*;
public class rogh{
    public static double len(String str){
        int x=0,y=0;
        
       for(int i=0;i<str.length();i++){
        if(str.charAt(i)=='w'||str.charAt(i)=='W')
        x--;
        else if(str.charAt(i)=='N'||str.charAt(i)=='n')
        y++;
        else if(str.charAt(i)=='e'||str.charAt(i)=='E')
        x++;
        else if(str.charAt(i)=='s'||str.charAt(i)=='S')
        y--;
       }
       int X=x*x;
       int Y=y*y;
       return Math.sqrt((X+Y));
       

    }


    public static void main(String args[]){
       char arr[]={'a','d','i','t','y','a'};
       
       String str2=new String("xyz");
       Scanner sc=new Scanner(System.in);
       String str=sc.nextLine();
       System.out.println(len(str));

    }

}     

