package palindrome;
import java.util.Scanner;



public class palindrome {

    public boolean isPalindrome(int x){
        if(x < 0){
            return false;   
        }

        int originalNumber = x;
        int reversedNumber = 0;

        while( x != 0){
            int digit = x % 10;
            reversedNumber = reversedNumber * 10 + digit;
            x = x /10;
        }

        return originalNumber == reversedNumber;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();

        palindrome  result = new palindrome();
        System.out.println(result.isPalindrome(x));
    } 
    
}
