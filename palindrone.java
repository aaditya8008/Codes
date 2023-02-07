import java.util.Arrays;
import java.util.*;
public class rogh{
    public static void len(String str){
        int s=0;
        int e=str.length() -1;
while(s<e){
    if(str.charAt(s++)!=str.charAt(e--)){
        System.out.println("Not polindrone");
        return;
    }

}
System.out.println("Polindrone");
        
    }
    public static void main(String args[]){
       char arr[]={'a','d','i','t','y','a'};
       
       String str2=new String("xyz");
       Scanner sc=new Scanner(System.in);
       String str=sc.nextLine();
       len(str);

    }

}     

