#include<iostream>
#include <stdio.h>
using namespace std;
int z=0;
// this is a common example for the recursive function where we use the code
// before the recursive call
// descending recursion
void func1(int n){
    if (n>0)
    {
        /* code */
        printf("%d\n",n);
        func1(n-1);
    }
    
}
// this is a common example for the recursive function where we use the code
// after the recursive call
// ascending recursion
void func2(int n){
    if (n>0)
    {
        /* code */
    
        func2(n-1);
        printf("%d\n",n);

        // output will like: 
        // 1
        // 2
        // 3
        // 4
        // 5
        // 6
        // 7
        // 8
        // 9
        // 10
    }
    
}

void abc(int c){
    if (c>0)
    {
        /* code */
        // this code also called at calling function calll
        printf("%d\n",c); // THIS CODE IS CALLING FUNCTION CALL 

        abc(c-1);
        // this code will be called after the returning fucntion call 
        printf("%d\n",c);// CODE AFTER RETURN FUNCTION CALL
    }
    // output:
    //     10
    //     9
    //     8
    //     7
    //     6
    //     5
    //     4
    //     3
    //     2
    //     1
    
}
int staticVariablesInRecursion(int a){
    // static varibals always start with 0
    static int b;
    if (a > 0)
    {
        /* code */
        b=b+1;
        z++;
        return staticVariablesInRecursion(a-1)+z;

    }
    return 0;
    
}


// both the static and the global variable will act just same like each other 
// the static variables are not created in each and every activation space for each function 

int main()
{
    int x=10;
    // printf("now we are going to write the code for the Decresing order using recursion:\n");
    // func1(x);
    // static int b;
    // cout<<b<<endl;// 0

    printf("%d",staticVariablesInRecursion(5));

    // abc(4);
    return 0;
}