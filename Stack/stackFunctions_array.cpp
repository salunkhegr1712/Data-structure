#include<iostream>
#include <stdio.h>
using namespace std;
// stack contains an array and a element to point at the top of the array
// stack follows the lifo type of the structure 
struct stack{
    int*arr;
    int top;
    int size;
};

// a function to initialise the stack 
void initialise(stack*ptr,int n){
    ptr->arr=new int(n);
    ptr->top=-1;
    ptr->size=n;
    // return ptr;
}
// if you get any trouble while understanding belowed code 
// just draw a tree in which you will get the flow of the stack also know how it worked 
void displayStack(stack*ptr,int j){
    if (j>=0)
    {
        // here im using the recurrsion and it is of type ascending type 
        /* code */
        
        displayStack(ptr,j-1);
        printf("element at index %d is : %d\n",j,ptr->arr[j]);
    }
    
}

int isEmpty(stack*ptr){
    if (ptr->top==-1)
    {
        // printf("stack underflow!!\n");
        return -1;
    }
    // printf("Stack is not empty!!\n");
    return 1;
}

int isFull(stack*ptr){
    if (ptr->size==ptr-> top+1)
    {
        // printf("stack overflow!!\n");
        return -1;
    }
    // printf("Stack is not full!!\n");
    return 1;
}

int push(stack*ptr,int p){
    if(isFull(ptr)==-1){
        printf("cant push\n");
        return -1;
    }
    ptr->top++;
    ptr->arr[ptr->top]=p;
    return 1;
}

int pop(stack*ptr){
    if(isEmpty(ptr)==-1){
        printf("cant pop\n");
        return -1;
    }
    int z=ptr->arr[ptr->top];
    ptr->arr[ptr->top]=0;
    ptr->top--;
    return z;
}

int peek(stack*ptr,int index){
    if (index > ptr->size)
    {
        /* code */
        printf("invalid index spotted!\n");
        return -1;
    }
    
    return ptr->arr[ptr->top-index +1];
}

int stackTop(stack*ptr){
    return ptr->arr[ptr->top];
}