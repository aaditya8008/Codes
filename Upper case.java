import java.util.Arrays;
import java.util.Scanner;
public class rogh{
    public static void print(String str){

        StringBuilder sb=new StringBuilder("");
    char ch=Character.toUpperCase(str.charAt(0));
    sb.append(ch);
for(int i=1;i<str.length();i++){
if(str.charAt(i)==' '){
    sb.append(' ');
i++;
sb.append(Character.toUpperCase(str.charAt(i)));

}
else{
    
    sb.append(str.charAt(i));
}


}
System.out.print(sb);




    }
    public static void main(String args[]){
       char arr[]={'a','b','c','d'};
       
       String str2=new String("xyz");
       Scanner sc=new Scanner(System.in);
       
       String str=sc.nextLine();
       

        print(str);
      
    }

    }

    

