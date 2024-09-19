
public class TwoSum {
    public static int[] twoSum(int[] numbers, int target) {
        
        int left = 0;
        int right = numbers.length - 1;

        while (left < right) {
            int currentSum = numbers[left] + numbers[right];

            if (currentSum == target) {
                
                return new int[]{left + 1, right + 1}; 
            } else if (currentSum < target) {
                
                left++;
            } else {
                
                right--;
            }
        }

        
        return new int[]{-1, -1};
    }

    public static void main(String[] args) {
        int[] numbers = {2, 7, 11, 15};
        int target = 9;

        int[] result = twoSum(numbers, target);

        if (result[0] != -1 && result[1] != -1) {
            System.out.println("Two numbers found at indices: " + result[0] + " and " + result[1]);
        } else {
            System.out.println("No solution found");
        }
    }
}
