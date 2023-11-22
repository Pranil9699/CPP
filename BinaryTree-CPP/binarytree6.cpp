#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void printNode(Node* root){
    if(root==NULL)
    return;
   
    printNode(root->left);
     cout<<root->data<<" ";
    printNode(root->right);
    
}
int countroot(Node* root){
    if(root==NULL)
    return 0;
    return countroot(root->left)+countroot(root->right)+1;
}
int sumroot(Node* root){
    if(root==NULL)
    return 0;
    return sumroot(root->left)+sumroot(root->right)+root->data;
}
int main(){
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
printNode(root);
cout<<" THE COUNT OF root is "<<countroot(root)<<endl;
cout<<" THE SUM OF root is "<<sumroot(root)<<endl;
    return 0;
}