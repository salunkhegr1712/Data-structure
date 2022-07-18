#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    struct rectangle *ptr;
};

int main()
{

    // dynamically allocating memory from the heap with c code
    rectangle *n = (rectangle *)malloc(sizeof(rectangle));
    // dynamically allocating memory from the heap with c code

    // we use square tag in rectangle and inside it we give size which we want to allocate
    rectangle *m = new rectangle;
    // in case of the pointers we use the -> arrow operator to assign data into a pointer variable
    // using arrow operator to fetch the data inside the pointer
    m->breadth = 10;
    m->length = 10;

    // declaring a normal variable and can fetch data inside it
    rectangle a;
    // for normal variables we prefer to use the dot operator
    a.length = 10;
    a.breadth = 10;

    cout << "size of normal variable:" << sizeof(a) << endl
         << "size of the pointer varible:" << sizeof(m) << endl;
    // size of pointer varible is less than or equal to normal varible
    // size of normal variable : 16
    // size of the pointer varible : 8

    return 0;
}