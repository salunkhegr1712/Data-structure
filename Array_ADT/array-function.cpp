//importing basic libraries
#include<iostream>
#include<stdio.h>
using namespace std;
// creating the structure with size or length
struct array
{
    int*a;
    int size;
    int length;
};
// a funnction to initulise dynamic array with  malloc

void initilialise(struct array*ptr,int size){

    ptr->a=(int*)malloc(sizeof(int)*size);
}

// display the array with reference to the position of elements of array
void display(struct array*ptr){\
    printf("\n");
    
    for (int i = 0; i < ptr->size; i++)
    {   
        cout<<"element at position "<<i <<" is : "<<ptr->a[i]<<endl;
        /* code */
    }

}

// assigning value to the index with set index function having parameters like value and index
void setindex(array*ptr,int val,int index){
    if (index> ptr->size)
    {
        cout<<"error";
        return;
    }
    
    ptr->a[index]=val;
}

// function to delete the the array and shift the remaining element 

void dlt(array*ptr,int val){

    int i=0;
    for (i; i < ptr->size; i++)
    {
        if(ptr->a[i]==val){
            ptr->a[i]=0;
            break;
        }
    }
    ptr->size=ptr->size -1;

    for (int j = i; j < ptr->size -1; j++)
    {
        ptr->a[j]=ptr->a[j+1];
    }

}

// get index of the value from array 
int getindex(array*ptr,int val){
    int i=0;
    for(i;i<ptr->size;i++){
        if (ptr->a[i]==val)
        {
            break;
        }
        
    }
    if(i==ptr->size){
        return -1;
    }
    return i;
}

// function to find max in array 
int max(array*ptr){
    int maximum;
    maximum=ptr->a[0];
    for (int i = 0; i < ptr->size; i++)
    {
        if (maximum <=ptr->a[i])
        {
            maximum=ptr->a[i];
        }
        
    }
    return maximum;
    
}

// function to find mininum elements in array
int min(array*ptr){
    int minimum;
    minimum=ptr->a[0];
    for (int i = 0; i < ptr->size; i++)
    {
        if (minimum >=ptr->a[i])
        {
            minimum=ptr->a[i];
        }
        
    }
    return minimum;
}

// swpping the two value with memory referncing 
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// reverse the array
void reverse(array*ptr){
    for(int i=0;i< ptr->size/2;i++){
        swap(ptr->a[i],ptr->a[ptr->size-i-1]);
    }
}

// rotate the array to left
void rotateleft(array*ptr){
    int aa=ptr->a[0];
    

    for (int i = 0; i < ptr->size-1; i++)
    {
        ptr->a[i]=ptr->a[i+1];
    }
    ptr->a[ptr->size-1]=aa;
}

// rotate the array towards right
void rotateright(array*ptr){
    int aa=ptr->a[ptr->size-1];
    

    for (int i = ptr->size -1; i >0; i--)
    {
        ptr->a[i]=ptr->a[i-1];
    }
    ptr->a[0]=aa;
}

// rotate the array with the number of iterations 
void rotate(array*ptr,char c,int times){
    if (c =='l')
    {
        for (int i = 0; i < times; i++)
        {
            rotateleft(ptr);
        }
    
    }
    else{
        for (int i = 0; i < times; i++)
        {
            rotateright(ptr);
        }
    }
    
}

