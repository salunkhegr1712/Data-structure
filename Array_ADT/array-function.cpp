// importing basic libraries
#include <iostream>
#include <stdio.h>
using namespace std;
// creating the structure with size or length
struct array
{
    int *a;
    int size;
    int length;

    // a funnction to initulise dynamic array with  malloc

    void initilialise(int size)
    {

        a = (int *)malloc(sizeof(int) * size);
    }

    // display the array with reference to the position of elements of array
    void display()
    {
        printf("\n");

        for (int i = 0; i < size; i++)
        {
            cout << "element at position " << i << " is : " << a[i] << endl;
            /* code */
        }
    }
    void addOrAppned(int val)
    {
    }

    // assigning value to the index with set index function having parameters like value and index
    void setindex(int val, int index)
    {
        if (index > size)
        {
            cout << "error";
            return;
        }

        a[index] = val;
        length++;
    }

    // function to delete the the array and shift the remaining element

    void dlt(int val)
    {

        int i = 0;
        for (i; i < size; i++)
        {
            if (a[i] == val)
            {
                a[i] = 0;
                break;
            }
        }
        size = size - 1;

        for (int j = i; j < size - 1; j++)
        {
            a[j] = a[j + 1];
        }
    }

    // get index of the value from array
    int getindex(int val)
    {
        int i = 0;
        for (i; i < size; i++)
        {
            if (a[i] == val)
            {
                break;
            }
        }
        if (i == size)
        {
            return -1;
        }
        return i;
    }

    // function to find max in array
    int max()
    {
        int maximum;
        maximum = a[0];
        for (int i = 0; i < size; i++)
        {
            if (maximum <= a[i])
            {
                maximum = a[i];
            }
        }
        return maximum;
    }

    // function to find mininum elements in array
    int min()
    {
        int minimum;
        minimum = a[0];
        for (int i = 0; i < size; i++)
        {
            if (minimum >= a[i])
            {
                minimum = a[i];
            }
        }
        return minimum;
    }

    // swpping the two value with memory referncing
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // reverse the array
    void reverse()
    {
        for (int i = 0; i < size / 2; i++)
        {
            swap(&a[i], &a[size - i - 1]);
        }
    }

    // rotate the array to left
    void rotateleft()
    {
        int aa = a[0];

        for (int i = 0; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[size - 1] = aa;
    }

    // rotate the array towards right
    void rotateright()
    {
        int aa = a[size - 1];

        for (int i = size - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = aa;
    }

    // rotate the array with the number of iterations
    void rotate(char c, int times)
    {
        if (c == 'l')
        {
            for (int i = 0; i < times; i++)
            {
                rotateleft();
            }
        }
        else
        {
            for (int i = 0; i < times; i++)
            {
                rotateright();
            }
        }
    }

    int average()
    {
        int sum=0;
        for(int i=0;i<size;i++){
            sum=sum+a[i];
        }
        return sum/size;
    }

    int sum()
    {
        int sum=0;
        for(int i=0;i<size;i++){
            sum=sum+a[i];
        }
        return sum;
    }
};

// sorting amd searching algos

void linear_search(array *ptr, int val)
{
    for (int i = 0; i < ptr->size; i++)
    {
        if (ptr->a[i] == val)
        {
            cout << "element found and it is at index " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

// binary search is applicable only for the  sorted array
void binary_search(int *a, int size, int val)
{

    int start = 0;
    int end = size - 1;

    while (start != end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == val)
        {
            printf("\nValue found succesfulley!\nindex is : %d", mid);
            return;
        }
        else if (val > mid)
        {
            /* code */
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    printf("\nelement is not there in array");
}


void isSorted(int*a,int size){
    for (int i = 0; i < size -1; i++)
    {   
        if (a[i]>a[i+1])
        {
            cout<<"\narray is not sorted!!"<<endl;
            return;
        }
        
    }
    cout<<"\narray is sorted"<<endl;
    
}

int* merge(array a1,array a2){

    int z=a1.size + a2.size;

    int*mergeArray=new int[z];
    int i=0,j=0;
    for(i ; i < a1.size; i++)
    {
        mergeArray[i]=a1.a[i];
   
    }

    for (i;i<z;i++){
        mergeArray[i]=a2.a[j];
        j=j+1;
    }
    return mergeArray;
    
}
int unsortedElements(int*a,int size){
    int j=0;
    for (int i = 0; i < size-1; i++)
    {
        if (a[i]>a[i+1])
        {
            /* code */
            printf("%d %d",a[i],a[i+1]);
            j=j+1;
        }
        
    }

    return j;
    
}