import java.util.*;
public class rogh{
public static void main(String args[]){
pen p1=new pen();
p1.setcolor("Blue");
System.out.println(p1.color);
p1.settip(5);
System.out.println(p1.tip);
bankacc myacc=new bankacc();
myacc.username="Aaditya";
myacc.setpassword("abcdeg");

}
}
class bankacc{
 public String username;
 private String password;
void setpassword(String newpassword){
password=newpassword;

}
}





  class pen{
   String color;
   int tip;
   void setcolor(String newcolor){
      color=newcolor;
   }
   void settip(int newtip){
    tip =newtip;

   }
  }  

