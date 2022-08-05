#include<iostream>
#include <stdio.h>
#include "stackFunctionsLl.cpp"
using namespace std;
int main()
{
    struct node* top=NULL;
    
    top=push(top,20);
    top=push(top,30);
    top=push(top,40);
    top=push(top,210);
    top=push(top,20);
 
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=pop(top);
    // top=push(top,210);
    // top=pop(top);
    // printf("%d\n",top->value);
    top=push(top,100);
    printStack(top);
    printf("element at index %d is %d\n",1,peek(top,1));
    printf("element at index %d is %d\n",2,peek(top,2));
    printf("element at index %d is %d\n",3,peek(top,3));
    printf("element at index %d is %d\n",4,peek(top,4));
    printf("element at index %d is %d\n",5,peek(top,5));
    printf("element at index %d is %d\n",6,peek(top,6));
    printf("element at index %d is %d\n",7,peek(top,7));
    cout<<"top of the stack is : "<<stackTop(top)<<endl;
    return 0;
}