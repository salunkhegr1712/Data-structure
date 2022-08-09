// basic library functions to be imported first 
// A macro is a piece of code in a program that is replaced by the value of the macro. Macro is defined
//  by #define directive. Whenever a macro name is encountered by the compiler, it replaces the name with 
//  the definition of the macro. Macro definitions need not be terminated by a semi-colon(;).
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include "queueArrayFunction.cpp"
using namespace std;

// starting the execution of main function 
int main()

{
    // initialise new queue
    // do operations on queue 
    queue ptr;

    initialise(&ptr,10);
    
    cout<<endl;
    cout<<"Front is :"<<ptr.front<<endl;
    cout<<"Rear is :"<<ptr.rear<<endl;
    cout<<"Size is :"<<ptr.size<<endl;
    displayQueue(&ptr);
    enqueue(&ptr,10);
    enqueue(&ptr,20);
    enqueue(&ptr,30);
    enqueue(&ptr,40);
    enqueue(&ptr,60);
    enqueue(&ptr,70);
    enqueue(&ptr,80);
    enqueue(&ptr,90);
    enqueue(&ptr,91);
    enqueue(&ptr,92);
    // enqueue(&ptr,93);
    // cout<<"no of elements in queue is : "<<count(&ptr)<<endl;
    // printf("element is deleted : %d\n",dequeue(&ptr));
    // printf("element is deleted : %d\n",dequeue(&ptr));
    // printf("element is deleted : %d\n",dequeue(&ptr));
    // printf("element is deleted : %d\n",dequeue(&ptr));
    // displayQueue(&ptr);
    // cout<<"no of elements in queue is : "<<count(&ptr)<<endl;
    // cout<<"Front element is :"<<front(&ptr)<<endl;
    // cout<<"Last element is :"<<rear(&ptr)<<endl;
    return 0;
}