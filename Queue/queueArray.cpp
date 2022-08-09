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

    ptr.initialise(10);
    
    cout<<endl;
    cout<<"Front is :"<<ptr.front<<endl;
    cout<<"Rear is :"<<ptr.rear<<endl;
    cout<<"Size is :"<<ptr.size<<endl;
    ptr.displayQueue();
    ptr.enqueue(10);
    ptr.enqueue(20);
    ptr.enqueue(30);
    ptr.enqueue(40);
    ptr.enqueue(50);
    ptr.enqueue(60);
    ptr.displayQueue();

    cout<<"no of elements in queue is : "<<ptr.count()<<endl;
    printf("element is deleted : %d\n",ptr.dequeue());
    printf("element is deleted : %d\n",ptr.dequeue());
    printf("element is deleted : %d\n",ptr.dequeue());
    printf("element is deleted : %d\n",ptr.dequeue());
    ptr.displayQueue();
    // cout<<"no of elements in queue is : "<<count(&ptr)<<endl;
    // cout<<"Front element is :"<<front(&ptr)<<endl;
    // cout<<"Last element is :"<<rear(&ptr)<<endl;
    return 0;
}