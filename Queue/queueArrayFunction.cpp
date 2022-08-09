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


// display queue function in order to print the queue 
void displayQueue(){
    if (front==rear)
    {
        cout<<"array is Empty"<<endl;
        return;
    }
    // loop will run from front to rear 
    for (int i = front; i <=rear ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// function to initialise the queue and assign all basic values to size and 
// dynamically allocating the new 
void initialise(int size){

    arr=new int[size];
    front=-1;
    rear=-1;
    size=size;
}

// it will return the front of the queue 
// int front(){
//     return  arr[front];
// }
// // it will return last element of the queue 
// int rear(){
//     return  arr[rear];
// }

// check that is queue is full or not 
// -1 if it is full 
// 1 if not full
int isFull(){
    if (rear==size-1)
        /* code */
        return -1;
    else
        return 1;
    
}

// check that is queue is empty or not 
// -1 if it is empty
// 1 if not empty
int isEmpty(){
    if (rear<front)
        /* code */
        return -1;
    else
        return 1;
}

// queue function to add element from rear 
void enqueue(int val){
    if (isFull()==-1)
    {    /* code */
        printf("queue is full cant enqueue\n");
        return;
    }
    // condition for first insertion where front is -1 and it should be incremented 
    else if(front==-1){
        front++;
        rear++;
        arr[rear]=val;
        return;
    }
    else{
        rear++;
        arr[rear]=val;
        return;
    }
    rear++;

}

// basic dequeue function will delete first element from front and increment front 
// we are moving front so that we can maintain time complexity of O(1)
int dequeue(){
    if (isEmpty()==-1)
    {
        /* code */
        printf("queue is empty cant dequeue\n");
        return -1;
    }
    int a=arr[front];
    arr[front]=-1;
    front++;
    return a;
}

// count function to return no of elemtents in queue 
int count(){
    return rear - front +1;
}

};