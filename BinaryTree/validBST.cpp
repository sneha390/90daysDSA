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
        root = nullptr;
    }
    

    int insertion(int data){
    treeNode *newNode = new treeNode(data);

    if(root == nullptr){
        root = newNode;
        return 1; 
    }

    treeNode *temp = root;
    while(temp!=nullptr){
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
        }else{
            return 0;
        }
    }
    return 0;
}

void inOrder(treeNode *root){
    if(root == nullptr){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}


};



void inOrderBST(treeNode *root , vector<int>&seen){
    if(root == nullptr){
        return;
    }
    inOrderBST(root->left,seen);
    seen.push_back(root->data);
    inOrderBST(root->right,seen);
}



bool checkBST(treeNode *root){
    vector<int>seen;
    if(root == nullptr){
        return false;
    }
    inOrderBST(root,seen);
    for(int i = 0; i < seen.size() -1 ; i++){
        if(seen[i] >= seen[i + 1]){
            return false;
        }
    }
    return true;
}

int main(){
    BST T1;
    
    T1.insertion(2);
    T1.insertion(3);
    T1.insertion(4);
    T1.insertion(1);
    T1.insertion(6);
    T1.insertion(9);
    T1.insertion(8);
    T1.insertion(7);

    

    if(checkBST(T1.root)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    return 0;
}