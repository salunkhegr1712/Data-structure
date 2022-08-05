#include<iostream>
#include <stdio.h>
using namespace std;

struct node{
    int value;
    struct node*next;
};

struct node* initialise(node*ptr,int val){
    ptr=(node*)malloc(sizeof(node));
    ptr->value=val;
    ptr->next=NULL;
    return ptr;
}

struct node* push(node*ptr,int val){
    struct node*n=initialise(n,val);
    if (n==NULL)
    {
        printf("Stack Overflow");
        return NULL;
    }
    n->next=ptr;
    ptr=n;
    return ptr;
    
}

node* pop(node*ptr){
    if (ptr==NULL){
        cout<<"stack underflow"<<endl;
        return NULL;
    }
    struct node*n=ptr->next;
    free(ptr);
    return n;
}

void printStack(node*ptr){
    if (ptr== NULL)
    {
        return;
    }
    printStack(ptr->next);
    printf("%d\n",ptr->value);
    
}

int peek(node*ptr,int index){
    if (ptr==NULL)
    {
        return -1;
    }
    else if(index==1){
        return ptr->value;
    }
    else{
        int i=1;
        while (i!=index && ptr!=NULL)
        {
            ptr=ptr->next;
            i=i+1;
        }
        if (ptr==NULL)
        {
            /* code */
            return -1;
        }
        
        return ptr->value;
        
    }
    
    

}

int stackTop(node*p){
    if (p==NULL)
    {
        return -1;
    }
    
    return p->value;
}