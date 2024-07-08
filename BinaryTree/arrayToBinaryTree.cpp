// 108. Convert Sorted Array to Binary Search Tree
#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

TreeNode* helper(vector<int>& nums, int s, int e) {
    if (s > e) {
        return nullptr;
    }

    int mid = s + (e - s) / 2; // Avoid overflow
    TreeNode* root = new TreeNode(nums[mid]);
    cout << "Creating node with data: " << nums[mid] << endl; // Debug statement
    root->left = helper(nums, s, mid - 1);
    root->right = helper(nums, mid + 1, e);
    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return helper(nums, 0, nums.size() - 1);
}

void inOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
    vector<int> nums;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    TreeNode* result = sortedArrayToBST(nums);

    cout << "In-order traversal of the BST: ";
    inOrder(result);
    cout << endl;

    return 0;
}
