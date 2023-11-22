#include<iostream>
#include<cmath>
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
void printroot(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    printroot(root->left);
    printroot(root->right);

}
int calculateHeight(Node* root){ // time complacity O(n)
    if(root==NULL)
    return 0;
    int LHeight=calculateHeight(root->left);
    int RHeight=calculateHeight(root->right);
    cout<<" RHeight = "<< RHeight<< " LHeight = "<<LHeight<<endl;
    return max(RHeight,LHeight)+1;
}
int main(){
   struct Node* root = new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5); 
   root->right->left=new Node(6);
   root->right->right=new Node(7);
   printroot(root);
   cout<<calculateHeight(root)<<" ";

   // return 0;
}
