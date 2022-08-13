// importing all basic things from iostream object and predefined header files 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
// declaring a global variable 
int count =0;
// declaring main structure for which we are going to write the functions 
struct node{
    int data;
    struct node*lchild;
    struct node*rchild;
};

// a function which create a new structure with dynamic initialisation 
node* initialise(int val){
    count=count+1;
    struct node*ptr=(node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->lchild=NULL;
    ptr->rchild=NULL;  
    return ptr; 
}

// one of the traversal method to traverse tree 
// left-subtree  --> root --> right-subtree 
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

// preorder traversal method 
// left-subtree --> right-subtree  --> root
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

// postorder traversal method 
// left-subtree --> right-subtree  --> root
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

// function to insert element inside the tree 
void insertion(struct node*ptr,int val){
    // if value already there in tree dont insert just skip the process
    if (val==ptr->data)
    {
        /* code */
        return;
    }
    // go toward right subtree if value is greater than that of root
    else if (val > ptr->data && ptr->rchild==NULL)
    {
        /* code */
        struct node*c=initialise(val);
        ptr->rchild=c;

    }
    // go toward left  subtree if value is less than that of root
    else if (val < ptr->data && ptr->lchild==NULL)
    {
        /* code */
        struct node*c=initialise(val);
        ptr->lchild=c;
  
    }
    // if left and right childs both are preoccupied then just go to left 
    // or right subtree according to value of insertion 
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

// function to print the height of the tree 
// it will give overall height of the tree 
int height(struct node*n){
    
    if (n==NULL)
    {
        /* code */
        return 0;
    }
    return max(height(n->lchild)+1,height(n->rchild)+1);
    
}

// basic block which we are going to use inside the printlevelwise function 
void plw(struct node*ptr,int lvl,int tg){
    if (ptr==NULL)
    {
        /* code */
        return;
    }
    if(tg==lvl){
        
        cout<<ptr->data<<"  ";
        return;
    }
    plw(ptr->lchild,lvl+1,tg);
    plw(ptr->rchild,lvl+1,tg);
    
}

// this is also a way of traversing the tree where we traverse the tree according
// to level of nodes 

void printLevelwise(struct node*root){
    int j=height(root);
    for (int i = 0; i < j; i++)
    {
        /* code */
        printf("\nelements at level %d is/are : ",i);
        plw(root,0,i);
        cout<<endl;
    }
    
}

void search(struct node*root,int val){
    int static v;
    if (root==NULL)
    {
        /* code */
        cout<<"element is not there in tree"<<endl;
    }
    
    else if(root->data==val){
        cout<<"element found in "<<v<<" iterations"<<endl;
    }
    else if (val >root->data)
    {
        /* code */
        v++;
        search(root->rchild,val);
    }
    else{
        v++;
        search(root->lchild,val);
    }
    
}

int iterative_search(struct node*root,int val){
    int static v;
    if (root==NULL)
    {
        /* code */
        // cout<<"element is not there in tree"<<endl;
        return -1;
    }
    else{
        while (root!=NULL)
        {
            /* code */
            if (root->data==val)
            {
                /* code */
                return 1;
            }
            else if (root->data>val)
            {
                /* code */
                root=root->lchild;
            }
            else{
                root=root->rchild;
            }
            
        }
        return -1;
        
    }
}
