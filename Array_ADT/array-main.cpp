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
    ptr.initilialise(15);
    // initilialise(&ptr,ptr.size);
    int aa=10;
    printf("\n");
    for (int i = 0; i < ptr.size; i++)
    {
        ptr.a[i]=aa;
        aa=aa+10;
        
    }
    
    // after converting normal code to object oriented code for struct array 
    ptr.display();

    // cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    // dlt(&ptr,20);
    // display(&ptr);

    // cout<<"index of value "<<410 <<" is "<< getindex(&ptr,410)<<endl;
    // cout<<"maximum element is : "<<max(&ptr)<<endl;
    // cout<<"minimum element is : "<<min(&ptr)<<endl;
    // cout<<"index of value "<<410 <<" is "<< ptr.getindex(410)<<endl;
    // cout<<"maximum element is : "<<ptr.max()<<endl;
    // cout<<"minimum element is : "<<ptr.min()<<endl;
// CONVERTED CODE IN OOP  
    // ptr.reverse();
    // ptr.rotate('l',5);
    // reverse(&ptr);
    // rotate(&ptr,'l',4);
    // display(&ptr);
    // linear_search(&ptr,100);
    int arr[]={10,20,30,40,50,60,70};
    binary_search(arr,7,50);
    printf("\naverage is : %d",ptr.average());
    delete(&ptr);
    return 0;
}