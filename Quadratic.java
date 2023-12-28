
import java.util.Scanner;
import java.lang.Math;

public class Quadratic {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();

        double discriminant = Math.pow(b,2) - 4* a * c;

        System.out.println(discriminant);


        double root1 = ((-1*b)+Math.sqrt(discriminant))/2* a;
        double root2 = ((-1*b)-Math.sqrt(discriminant))/2* a;

        System.out.println("Root1 :"+root1);
        System.out.println("Root2 :"+root2);

    }
    
}
