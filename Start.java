import java.util.*;
class Life{
    public static void main(String srgs[]){
        Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
        switch(n){
            case 1:
            System.out.println("Excellent");
            break;
            case 2:
            System.out.println("Perfect");
            break;
            default:
            System.out.println("Best");
        }
    }
}