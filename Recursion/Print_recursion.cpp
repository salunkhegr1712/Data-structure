#include<iostream>
#include <stdio.h>
using namespace std;

void func1(int n){
    if (n>0)
    {
        /* code */
        printf("%d\n",n);
        func1(n-1);
    }
    
}
void func2(int n){
    if (n>0)
    {
        /* code */
    
        func2(n-1);
        printf("%d\n",n);
    }
    
}

void abc(int c){
    if (c>0)
    {
        /* code */
        printf("%d\n",c); // THIS CODE IS CALLING FUNCTION CALL
        abc(c-1);
        printf("%d\n",c);// CODE AFTER RETURN FUNCTION CALL
    }
    
}
int main()
{
    int x=10;
    // printf("now we are going to write the code for the Decresing order using recursion:\n");
    // func2(x);
    abc(4);
    return 0;
}