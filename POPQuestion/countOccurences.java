//  Java program to count occurrences 
package pattern;
class Main
{
    static int countOccurrences(int arr[], int n, int x)
    {

        int res = 0;
        for (int i=0; i<n; i++)

            if (x == arr[i])

              res++;

        return res;

    }
    public static void main(String args[])

    {

        int arr[] = {1, 2, 2, 3 ,8 ,8 };

        int n = arr.length;

        int x = 2;

        System.out.println(countOccurrences(arr, n, x));

    }
}
