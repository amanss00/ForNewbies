// Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].

// Return true if there is a 132 pattern in nums, otherwise, return false.

 
import java.util.Stack;

class Pattern {
    public boolean find132pattern(int[] nums) {
        int n = nums.length;
        if (n < 3) {
            return false;
        }

        Stack<Integer> stack = new Stack<>();
        int[] minArray = new int[n];
        minArray[0] = nums[0];

        // Create an array to store the minimum value for each index
        for (int i = 1; i < n; i++) {
            minArray[i] = Math.min(minArray[i - 1], nums[i]);
        }

        for (int j = n - 1; j >= 0; j--) {
            if (nums[j] > minArray[j]) {
                while (!stack.isEmpty() && stack.peek() <= minArray[j]) {
                    stack.pop();
                }
                if (!stack.isEmpty() && stack.peek() < nums[j]) {
                    return true;
                }
                stack.push(nums[j]);
            }
        }

        return false;
    }

    public static void main(String[] args) {
        Pattern solution = new Pattern();

        // Test cases
        int[] nums1 = {1, 2, 3, 4};
        boolean result1 = solution.find132pattern(nums1);
        System.out.println("Test case 1: " + result1);  // Output: false

        int[] nums2 = {3, 1, 4, 2};
        boolean result2 = solution.find132pattern(nums2);
        System.out.println("Test case 2: " + result2);  // Output: true

        int[] nums3 = {-1, 3, 2, 0};
        boolean result3 = solution.find132pattern(nums3);
        System.out.println("Test case 3: " + result3);  // Output: true
    }
}
