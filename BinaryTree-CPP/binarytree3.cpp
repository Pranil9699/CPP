#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
int search(int inorder[],int start,int end,int value){
    for (int i =start; i <= end; i++)
    {
        if(inorder[i]==value)
        return i;
    }
    return -1;
    
}

Node* buildtree(int postorder[],int inorder[],int start,int end){
    static int idx = 4;
    if(start > end)
    return NULL;

    int value = postorder[idx];
    idx--;
    Node* curr = new Node(value);
    if(start == end){
        return curr;
    }
    int pos = search(inorder,start,end,value);
    curr->right=buildtree(postorder,inorder,pos+1,end);
    curr->left=buildtree(postorder,inorder,start,pos-1);

    return curr;
}

void inorderPrint(Node* root){
if(root==NULL){
    return;
}
inorderPrint(root->left);
cout<<root->data<<" ";
inorderPrint(root->right);
}
int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root = buildtree(postorder,inorder,0,4);
    inorderPrint(root);
    return 0;
}