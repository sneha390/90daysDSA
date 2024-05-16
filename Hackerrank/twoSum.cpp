#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    
    std::unordered_map<int, int> num_indices;

    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        if (num_indices.find(complement) != num_indices.end()) {
            return {num_indices[complement], i};
        }
        num_indices[nums[i]] = i;
    }
    return {};
}

int main() {
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    auto result1 = twoSum(nums1, target1);
    for (int index : result1) {
        std::cout << index << " ";
    }
    
    std::cout << std::endl;

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    auto result2 = twoSum(nums2, target2);
    for (int index : result2) {
        std::cout << index << " ";
    }
    
    std::cout << std::endl;

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    auto result3 = twoSum(nums3, target3);
    for (int index : result3) {
        std::cout << index << " ";
    }

    return 0;
}
