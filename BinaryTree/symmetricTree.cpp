// 101. Symmetric Tree
// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).



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


bool helper(treeNode *p , treeNode *q){
    if(!p && !q){
        return true;
    }
    if(!p || !q){
        return false;
    }
    return p->data == q ->data && helper(p->left,q->right) && helper(p->right , q->left);

}

bool isSymmetricTree(treeNode* root) {
    if(!root){
        return true;
    }
    return helper(root, root);
}



int main(){
    Tree t;

    t.insertion(1);
    t.insertion(2);
    t.insertion(2);
    t.insertion(3);
    t.insertion(4);
    t.insertion(4);
    t.insertion(3);

    if (isSymmetricTree(t.root)) {
        cout << "The trees are the same." << endl;
    } else {
        cout << "The trees are not the same." << endl;
    }

}

