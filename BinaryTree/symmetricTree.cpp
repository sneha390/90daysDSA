// 101. Symmetric Tree
// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Tree{
    public:
    TreeNode *root;
    Tree(){
        this->root = nullptr;
    }

    void createSymmetricTree() {
        root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(2);
        root->left->left = new TreeNode(3);
        root->left->right = new TreeNode(4);
        root->right->left = new TreeNode(4);
        root->right->right = new TreeNode(3);
    }
};



bool helper(TreeNode *p , TreeNode *q){
    if(!p && !q){
        return true;
    }
    if(!p || !q){
        return false;
    }
    return (p->data == q ->data) && helper(p->left,q->right) && helper(p->right , q->left);

}

bool isSymmetricTree(TreeNode* root) {
    if(!root){
        return true;
    }
    return helper(root, root);
}



int main(){
    Tree t;

    t.createSymmetricTree();

    if (isSymmetricTree(t.root)) {
        cout << "The trees is symmetric." << endl;
    } else {
        cout << "The trees is not symmetric." << endl;
    }

}

