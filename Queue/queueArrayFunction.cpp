#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

// structure of queue having a array size and two basic points called front and rear
// front is used for deletion 
// rear is used for deletion 
// size will give main size of the queue we are fetching 
struct queue{
    int*arr;
    int size;
    int front;
    int rear;
};

// display queue function in order to print the queue 
void displayQueue(struct queue*a){
    if (a->front==a->rear)
    {
        cout<<"array is Empty"<<endl;
        return;
    }
    // loop will run from front to rear 
    for (int i = a->front; i <=a->rear ; i++)
    {
        cout<<a->arr[i]<<" ";
    }
    cout<<endl;
}

// function to initialise the queue and assign all basic values to size and 
// dynamically allocating the new 
void initialise(struct queue*n,int size){

    n->arr=new int[size];
    n->front=-1;
    n->rear=-1;
    n->size=size;
}

// it will return the front of the queue 
int front(struct queue*a){
    return  a->arr[a->front];
}
// it will return last element of the queue 
int rear(struct queue*a){
    return  a->arr[a->rear];
}

// check that is queue is full or not 
// -1 if it is full 
// 1 if not full
int isFull(struct queue*ptr){
    if (ptr->rear==ptr->size-1)
        /* code */
        return -1;
    else
        return 1;
    
}

// check that is queue is empty or not 
// -1 if it is empty
// 1 if not empty
int isEmpty(struct queue*ptr){
    if (ptr->rear<ptr->front)
        /* code */
        return -1;
    else
        return 1;
}

// queue function to add element from rear 
void enqueue(struct queue*ptr,int val){
    if (isFull(ptr)==-1)
    {    /* code */
        printf("queue is full cant enqueue\n");
        return;
    }
    // condition for first insertion where front is -1 and it should be incremented 
    else if(ptr->front==-1){
        ptr->front++;
        ptr->rear++;
        ptr->arr[ptr->rear]=val;
        return;
    }
    else{
        ptr->rear++;
        ptr->arr[ptr->rear]=val;
        return;
    }
    ptr->rear++;

}

// basic dequeue function will delete first element from front and increment front 
// we are moving front so that we can maintain time complexity of O(1)
int dequeue(struct queue*ptr){
    if (isEmpty(ptr)==-1)
    {
        /* code */
        printf("queue is empty cant dequeue\n");
        return -1;
    }
    int a=ptr->arr[ptr->front];
    ptr->arr[ptr->front]=-1;
    ptr->front++;
    return a;
}

// count function to return no of elemtents in queue 
int count(struct queue*ptr){
    return ptr->rear -ptr->front +1;
}