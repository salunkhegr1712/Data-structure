#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include "queueLLFunctions.cpp"
using namespace std;
int main()
{
   
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(11);
    enqueue(21);
    enqueue(31);
    display();
    
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();

    // cout<<rear->val<<endl;
    return 0;
}   