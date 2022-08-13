#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node*lchild;
    struct node*rchild;
};

node* initialise(int val){
    struct node*ptr=(node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->lchild=NULL;
    ptr->rchild=NULL;  
    return ptr; 
}

void inorder(struct node*ptr){
    if (ptr==NULL)
    {
        /* code */
        return;
    }
    inorder(ptr->lchild);
    printf("%d  ",ptr->data);
    inorder(ptr->rchild);
}

void preorder(struct node*ptr){
    if (ptr==NULL)
    {
        /* code */
        return;
    }
    printf("%d  ",ptr->data);
    preorder(ptr->lchild);
    preorder(ptr->rchild);
    
    
}

void postorder(struct node*ptr){
    if (ptr==NULL)
    {
        /* code */
        return;
    }
    postorder(ptr->lchild);
    postorder(ptr->rchild);
    printf("%d  ",ptr->data);
}
void insertion(struct node*ptr,int val){
    if (val==ptr->data)
    {
        /* code */
        return;
    }
    
    else if (val > ptr->data && ptr->rchild==NULL)
    {
        /* code */
        struct node*c=initialise(val);
        ptr->rchild=c;

    }
    else if (val < ptr->data && ptr->lchild==NULL)
    {
        /* code */
        struct node*c=initialise(val);
        ptr->lchild=c;
  
    }
    else{
        if (val > ptr->data)
        {
            /* code */
            insertion(ptr->rchild,val);
       
        }
        else
            insertion(ptr->lchild,val);
        
        }
}

void levelwise_traversal(struct node*ptr){
    int static i=0;
    printf("elements at level %d is : \n");
    cout<<ptr->data;
    node*a=ptr->lchild,*b=ptr->rchild;
    while (a!=NULL || b!=NULL)
    {
        /* code */
        printf("elements at level %d is : \n");
        cout<<a->data;
        cout<<b->data;
    }      
}

int height(struct node*n){
    
    if (n==NULL)
    {
        /* code */
        return 0;
    }
    return max(height(n->lchild)+1,height(n->rchild)+1);
    
}