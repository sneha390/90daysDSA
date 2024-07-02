// Given a BST, and input n and k, search for the element n. 
// If found, the node's value should be replaced with the sum of the value of its left child and k.



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class treeNode {
public:
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Tree {
public:
    treeNode *root;

    Tree() {
        this->root = nullptr;
    }

    int insertion(int data) {
        if (root == nullptr) {
            root = new treeNode(data);
            return 1;
        }

        treeNode *temp = root;

        while (temp != nullptr) {
            if (data > temp->data) {
                if (temp->right == nullptr) {
                    temp->right = new treeNode(data);
                    return 1;
                } else {
                    temp = temp->right;
                }
            } else if (data < temp->data) {
                if (temp->left == nullptr) {
                    temp->left = new treeNode(data);
                    return 1;
                } else {
                    temp = temp->left;
                }
            } else {
                return 0;
            }
        }
        return 0;
    }

    void inOrder(treeNode *root) {
        if (root == nullptr) {
            return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    bool searchAndUpdate(treeNode* root, int n, int k) {
        if (root == nullptr) {
            return false;
        }

        if (root->data == n) {
            int leftChildValue = root->left ? root->left->data : 0;
            root->data = leftChildValue + k;
            return true;
        }

        if (n < root->data) {
            return searchAndUpdate(root->left, n, k);
        } else {
            return searchAndUpdate(root->right, n, k);
        }
    }
};

int main() {
    Tree T1;
    T1.insertion(5);
    T1.insertion(9);
    T1.insertion(2);
    T1.insertion(1);
    T1.insertion(8);
    T1.insertion(6);

    cout << "In-order before update: ";
    T1.inOrder(T1.root);
    cout << endl;

    int n = 5;
    int k = 10;
    if (T1.searchAndUpdate(T1.root, n, k)) {
        cout << "Node " << n << " found and updated." << endl;
    } else {
        cout << "Node " << n << " not found." << endl;
    }

    cout << "In-order after update: ";
    T1.inOrder(T1.root);
    cout << endl;

    return 0;
}
