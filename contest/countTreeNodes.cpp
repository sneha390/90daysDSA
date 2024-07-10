#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode *right;
    treeNode *left;

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
        treeNode *newNode = new treeNode(data);
        if(root == nullptr){
            root = newNode;
            return 1;
        }
        treeNode *temp = root;
        while(temp != nullptr){
            if(data > temp->data){
            if(temp->right == nullptr){
                temp->right = newNode;
                return 1;
            }else{
                temp = temp->right;
            }
            }else if(data < temp->data){
            if(temp->left == nullptr){
                temp->left = newNode;
                return 1;
            }else{
                temp = temp->left;
            }
        }
        else{
            return 0;
        }
    }
    return 0;
    }

    void preOrder(treeNode *r){
        if(r == nullptr){
            return;
        }
        cout << r->data << endl;
        preOrder(r->left);
        preOrder(r->right);
    } 

    void inOrder(treeNode *r){
        if(r == nullptr){
            return;
        }
        inOrder(r->left);
        cout << r->data << endl;
        inOrder(r->right);
    }

    void postOrder(treeNode *r){
        if(r == nullptr){
            return;
        }
        postOrder(r->left);
        postOrder(r->right);
        cout << r-> data << endl;
    }
    
    int search(treeNode *root, int key){
        if(root == nullptr){
            return 0;
        }
        if(key == root->data){
            return root->data;
            return 1;
        }else{
            if(key > root->data){
                return search(root->right,key);
            }else if(key < root -> data){
                return search(root -> left,key);
            }
        }
        return 0;
    }

    int countNodes(treeNode* root) {
        if(!root){
            return 0;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

int main(){
    Tree T1;

    T1.insertion(22);
    T1.insertion(3);
    T1.insertion(1);
    T1.insertion(4);
    T1.insertion(5);
    T1.insertion(6);

    cout << "Preorder Traversal" << endl;
    T1.preOrder(T1.root);
    cout << "Inoreder Traversal" << endl;
    T1.inOrder(T1.root);
    cout << "Post Order Traversal" << endl;
    T1.postOrder(T1.root);

    int key = 1;
    if(T1.search(T1.root,key)){
        cout << key << "Key is found" << endl;
    }else{
        cout << "Key is not found" << endl;
    }

    cout << T1.countNodes(T1.root) << endl;

    return 0;
}