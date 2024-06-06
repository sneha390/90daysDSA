#include <iostream>
#include <vector>
 
bool containsNearbyDuplicateBruteForce(const std::vector<int>& nums, int k) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n && j <= i + k; ++j) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}
 
int main() {
    std::vector<int> nums = {1, 1, 3, 1, 2, 3};
    int k = 2;
    if (containsNearbyDuplicateBruteForce(nums, k)) {
        std::cout << "There are two equal numbers within distance " << k << std::endl;
    } else {
        std::cout << "No two equal numbers found within distance " << k << std::endl;
    }
    return 0;
}