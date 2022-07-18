#include <iostream>
#include <stdio.h>
using namespace std;

int*printArray(int *a)
{
    int z = 5;
    int val;
    for (int i = 0; i < z; i++)
    {
        cout << "enter the value for position " << i << " is : " << a[i] << endl;
        a[i]=i;
    }
    
    return a;
}

int main()
{
    int x[5] = {1, 3, 4, 56, 32};
    int*xx=printArray(x);
    xx=printArray(xx);
    
    return 0;
}