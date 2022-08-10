#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

// as we mentioned the pointers here the pointers will get automatically generated as you initialise 
// struct node
struct node{
    int val;
    struct node*next;

}*front=NULL,*rear=NULL;

// enqueue operation of stack 
void enqueue(int val){
    struct node*c=(node*)malloc(sizeof(struct node));
    c->next=NULL;
    c->val=val;
    if(c==NULL){
        printf("Cant add element further\n");
    }
    else{
        
        if (front==NULL && rear==NULL){
            front=c;
            rear=c;
            return;
        /* code */
        }
        rear->next=c;
        rear=c;
    }
    
}   

int dequeue(){
    if (front==NULL && rear==NULL)
    {
        /* code */
        printf("cant delete");
        return -1;
    }
    else{
        int c=front->val;
        struct node*ptr=front;
        front=front->next;
        delete(ptr);
        return c;
    }
    

}

void display(){
    struct node*ptr=front;
    while (ptr!=NULL)
    {
        /* code */
        printf("%d  ",ptr->val);
        ptr=ptr->next;
    }

    cout<<endl;
}