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

class BST{
    public:
    treeNode *root;

    BST(){
        this->root = nullptr;
    }

    int insertion(int data){
        treeNode *newNode = new treeNode(data);

        if(root == nullptr){
            root = newNode;
            return 1;
        }

        treeNode *temp = root;

        while(temp!= nullptr){
            if(data > temp->data){
                if(temp->right == nullptr){
                    temp->right = newNode;
                    return 1;
                }else{
                    temp = temp->right;
                }
            }else if(data < temp->data){
                if(temp->left == nullptr){
                    temp->left = nullptr;
                    return 1;
                }else{
                    temp = temp->left;
                }
            }else{
                return 0;
            }
            
        }

        return 0;
    }

    int height(treeNode *root){
        if(root== nullptr){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);

        return 1 + max(left,right);

    }
};

int main(){
    BST T1;
    T1.insertion(1);
    T1.insertion(3);
    T1.insertion(4);
    T1.insertion(2);
    T1.insertion(6);
    T1.insertion(7);
    T1.insertion(8);

    cout << T1.height(T1.root) << endl;

}