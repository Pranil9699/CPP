#include<iostream>
#include<cmath>
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
void preorder(Node*root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int calcHeight(Node*root){
    if(root=NULL)
    return 0;
    return max(calcHeight(root->left),calcHeight(root->right))+1;
}
int calcDiameter(Node* root){
    if(root==NULL)
    return 0;

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight +1;

    int lDiameter = calcHeight(root->left);
    int rDiameter = calcHeight(root->right);

    return max(currDiameter,max(lDiameter,rDiameter))+1;
}

int main(){
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

cout<<" Bye "<<endl;
preorder(root);

cout<< " The Diameter of the Node is : "<<calcDiameter(root)<<endl;

    return 0;
}