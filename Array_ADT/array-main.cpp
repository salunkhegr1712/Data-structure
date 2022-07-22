#include <iostream>
#include <stdio.h>
#include "array-function.cpp"
using namespace std;

// main function 
int main()
{
    // int size = 10;
    // create pointer 
    array ptr ;
    ptr.size=10;
    // call function
    initilialise(&ptr,ptr.size);
    int aa=10;
    printf("\n");
    for (int i = 0; i < ptr.size; i++)
    {
        ptr.a[i]=aa;
        aa=aa+10;

    }
    
    // display(&ptr);
    // cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    // dlt(&ptr,20);
    // display(&ptr);

    // cout<<"index of value "<<410 <<" is "<< getindex(&ptr,410)<<endl;
    // cout<<"maximum element is : "<<max(&ptr)<<endl;
    // cout<<"minimum element is : "<<min(&ptr)<<endl;

    reverse(&ptr);
    rotate(&ptr,'l',4);
    display(&ptr);
    delete(&ptr);
    return 0;
}
