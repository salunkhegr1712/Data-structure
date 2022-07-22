#include<iostream>
#include<stdio.h>
using namespace std;
struct array
{
    int*a;
    int size;
    int length;
};


void initilialise(struct array*ptr,int size){

    ptr->a=(int*)malloc(sizeof(int)*size);
}

void display(struct array*ptr){\
    printf("\n");
    
    for (int i = 0; i < ptr->size; i++)
    {   
        cout<<"element at position "<<i <<" is : "<<ptr->a[i]<<endl;
        /* code */
    }

}

void setindex(array*ptr,int val,int index){
    if (index> ptr->size)
    {
        cout<<"error";
        return;
    }
    
    ptr->a[index]=val;
}

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

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(array*ptr){
    for(int i=0;i< ptr->size/2;i++){
        swap(ptr->a[i],ptr->a[ptr->size-i-1]);
    }
}

void rotateleft(array*ptr){
    int aa=ptr->a[0];
    

    for (int i = 0; i < ptr->size-1; i++)
    {
        ptr->a[i]=ptr->a[i+1];
    }
    ptr->a[ptr->size-1]=aa;
}

void rotateright(array*ptr){
    int aa=ptr->a[ptr->size-1];
    

    for (int i = ptr->size -1; i >0; i--)
    {
        ptr->a[i]=ptr->a[i-1];
    }
    ptr->a[0]=aa;
}

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





















