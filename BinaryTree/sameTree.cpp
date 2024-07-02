// 100. Same Tree
// Given the roots of two binary trees p and q, write a function to check if they are the same or not.
// Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Tree{
    public:
    treeNode *root;
    Tree(){
        this->root = nullptr;
    }

    int insertion(int data){
        if(root == nullptr){
            root = new treeNode(data);
            return 1;
        }

        treeNode *temp = root;
        while(temp != nullptr){
            if(data > temp->data){
                if(temp -> right == nullptr){
                    temp->right = new treeNode(data);
                    return 1;
                }else{
                    temp = temp -> right;
                }
            }
            else if(data < temp->data){
                if(temp -> left == nullptr){
                    temp->left = new treeNode(data);
                    return 1;
                }else{
                    temp = temp -> left;
                }
            }
            else{
                return 0;
            }
        }
        return 0;
    }


    
};

bool isSameTree(treeNode* p, treeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr ) {
            return false;
        }
        
        return p->data == q->data && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        
}

int main(){
    Tree p;
    Tree q;

    p.insertion(1);
    p.insertion(2);
    p.insertion(3);

    q.insertion(1);
    q.insertion(2);
    q.insertion(3);

    if (isSameTree(p.root, q.root)) {
        cout << "The trees are the same." << endl;
    } else {
        cout << "The trees are not the same." << endl;
    }

}