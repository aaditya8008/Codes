import java.util.*;

public class deci
to bin{

    public static int deci(int n) {
        int rem;
        int sum = 0;
        while (n != 0) {
            rem = n % 2;
            sum = sum * 10 + rem;
            n = n / 2;

        }
        return sum;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(deci(n));
    }

}
