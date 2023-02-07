import java.util.Arrays;
import java.util.Scanner;
public class rogh{
    public static void print(String str){
Integer count=0;
        StringBuilder sb=new StringBuilder("");
    
for(int i=0;i<str.length();i++){
    count=1;
    while(i<str.length()-1&&str.charAt(i)==str.charAt(i+1)){
    count++;
    i++;

    }
    sb.append(str.charAt(i));//newstr+=str.charAt(i)
    if(count>1)
    sb.append(count.toString());
}
System.out.print(5&6);




    }
    public static void main(String args[]){
       char arr[]={'a','b','c','d'};
       
       String str2=new String("xyz");
       Scanner sc=new Scanner(System.in);
       
       String str=sc.nextLine();
       

        print(str);
      
    }

    }

    

