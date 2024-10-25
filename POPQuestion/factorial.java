package pattern;
import java.util.Scanner;

public class factorial {
    public static void calculateFac(int n){
        
        if(n< 0){
            System.out.println("Invalid");
            return;
        }
        int fac = 1;
        for(int i = n; i >= 1; i--){
            fac = fac * i;
        }
        System.out.println(fac);
        return;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        calculateFac(num);

    }
    
}