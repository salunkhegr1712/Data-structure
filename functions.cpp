// breaking the code into small tasks we can do it with use of the function
// function is recyclable piece of code which you can use to define it and use function at any
// instance inside the main functions

// programming with functions is procedural programming

#include <iostream>
#include <stdio.h>
using namespace std;


struct rectangle{
    int l;
    int b;
};
// in memory every function has it own stack memory
void stda(int a, int b)
{ // the part  void stda() is function prototype where we define the function
    // int a inside the functuion is parameter
    // all part inside the { } is function declaration
    cout << "the controll flow is under the function" << endl;

    cout << "the numbers are::" << a << " & " << b << endl;
    cout << "the sum of numbers is::" << a + b << endl;
    cout << "the sub of numbers is::" << a - b << endl;
    cout << "the div of numbers is::" << (float)a / (float)b << endl;
    cout << "the mul of numbers is::" << a * b << endl;

    cout << "the controll flow is out off the function" << endl;
    return;
}

// values are swapped but we cant send them back to the main function with call by value
void swapWithCallByValue(int a, int b)
{
    int z = a;
    a = b;
    b = z;
}

// call by address will definitely used to change values of variables in main functions
void swapWithCallByAddress(int *a, int *b)
{
    // this use dereferncing
    int z = *a;
    *a = *b;
    *b = z;
}

// call by reference use the cpp function to use the references as nickname to varibles
// with refernces we can change the values of the variables inside the main function
void swapWithCallByReference(int &a, int &b)
{
    int z = a;
    a = b;
    b = z;
}

rectangle*functionForInput(rectangle*ptr){
    cout<<"enter length : "<<endl;
    cin>>ptr->l;

    cout<<"enter bredth : "<<endl;
    cin>>ptr->b;

    return ptr;
};

int main()
{
    // cout<<"the controll flow is under the main function"<<endl;
    // stda(10,29); //this is function call
    // cout<<"the controll flow is out of main the function"<<endl;

    // int x = 10;
    // int y = 20;
   
    // cout << "value of a is : " << x << endl
    //      << "value of b is : " << y << endl;
    // swapWithCallByValue(x,y);// passing variable as parameter
    // cout << "using call by value" << endl;

    // cout << "value of a is : " << x << endl
    //      << "value of b is : " << y << endl;

    // cout << "using call by address" << endl;
    // swapWithCallByAddress(&x,&y);//Passing addresses as parameter
    // cout << "value of a is : " << x << endl
    //      << "value of b is : " << y << endl;
    // cout << "using call by reference" << endl;
    // swapWithCallByReference(x,y);// passing variable as parameter
    // cout << "value of a is : " << x << endl
    //      << "value of b is : " << y << endl;

    rectangle *p=new rectangle;
    // this is call by refernce call by values will act same like common int function doesnt change 
    // value in main if changed in function
    p=functionForInput(p);

    cout<<"length is : "<< p->l<<endl<<"bredth is : "<<p->b<<endl;
    return 0;
}

// void function is of non return type function
// all other type of the function are of return type Ex: int,char,bool or any other structure