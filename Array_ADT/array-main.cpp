#include <iostream>
#include <stdio.h>
#include "array-function.cpp"
using namespace std;

int main()
{
    // int size = 10;
    array*ptr ;
    // ptr->a=(int*)malloc(sizeof(int)*10);
    ptr->size=10;
    // initilialise(ptr,size);
    int aa=10;
    // for (int i = 0; i <ptr->size; i++)
    // {
    //     ptr->a[i]=aa;
    //     aa=aa+10;
    // }
    // display(ptr);
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    // dlt(a,&ptr->size,20);
    // display(a,ptr->size);
    cout<<"index of value "<<410 <<" is "<< getindex(ptr,410)<<endl;
    cout<<"maximum element is : "<<max(ptr)<<endl;
    cout<<"minimum element is : "<<min(ptr)<<endl;

    // reverse(a,ptr->size);
    // rotate(ptr,'l',4);
    // display(ptr);
    // rotate(ptr,'r',4);
    // display(ptr);
    // delete(ptr);
    return 0;
}