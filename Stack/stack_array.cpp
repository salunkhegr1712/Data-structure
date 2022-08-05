#include<iostream>
#include <stdio.h>
#include "stackFunctions.cpp"

using namespace std;
int main()
{   
    stack main;
    initialise(&main,5);
    
    push(&main,101);
    push(&main,112);
    push(&main,1131);
    push(&main,11);
    push(&main,1111);
    // displayStack(&main,main.top);

    // pop(&main);
    // pop(&main);
    // pop(&main);
    // pop(&main);
    // pop(&main);
    // pop(&main);

    displayStack(&main,main.top);
    // printf("top value of stack is : %d\n",stackTop(&main));
    // printf("value at position %d of stack is : %d\n",0,peek(&main,0));
    printf("value at position %d of stack is : %d\n",1,peek(&main,1));
    printf("value at position %d of stack is : %d\n",2,peek(&main,2));
    printf("value at position %d of stack is : %d\n",3,peek(&main,3));
    printf("value at position %d of stack is : %d\n",4,peek(&main,4));
    printf("value at position %d of stack is : %d\n",5,peek(&main,5));
    peek(&main,6);
    // displayStack(&main,main.top);
    return 0;
}