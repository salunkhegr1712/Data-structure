#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "binary_tree_functions.cpp"
using namespace std;

int main()
{
    struct node*root=initialise(30);
    insertion(root,10);
    insertion(root,40);
    insertion(root,50);
    insertion(root,5);
    insertion(root,45);
    insertion(root,500);
    insertion(root,25);
    insertion(root,44);
    insertion(root,21);
    insertion(root,5);
    insertion(root,51);
    insertion(root,445);
    insertion(root,100);
    insertion(root,125);
    insertion(root,454);
    insertion(root,21);
    insertion(root,12);
    // cout<<"root is : "<<root->data<<endl;
    
    // cout<<"leftchild is : "<<root.lchild->data<<endl;
    // cout<<"rightchild is : "<<root.rchild->data<<endl;
    inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // preorder(root);
    // levelwise_traversal(root);
    // printf("height of tree is : %d \n",height(root));
    cout<<endl;
    printLevelwise(root);
    // cout<<"height of node 40 is :"<<levelOfNode(root,root->rchild->lchild)<<endl;
    return 0;
}