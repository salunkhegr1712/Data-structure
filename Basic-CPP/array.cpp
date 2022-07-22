#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
 // lets see some ways in order to declare an array
    int a[]={1,3,4,6,7,3,1,1,46,7,1};
    int b[5]={10,20,30,40,50};
    // all remaining value will get filled with 0 not garbage value

    int c[5]={0,0};
    for(int x:c){
        // printf("%d ",x);
        // 0 0 0 0 0
    }
    // following are the type by which you can print the array elements
    // printf("%d\n",a[4]);
    // printf("%d\n",4[a]);
    // printf("%d\n",*(a+4));
    // we can increase size of array but we can able to create a bigger array and transfer 
    // data from small to big and free up small space and point original name to newly created big 
    // array
    // create a dynamically allocated array having size of 5

    int *g=new int[5];     
    0[g]=10;1[g]=20;2[g]=30;3[g]=35;4[g]=40;
    for(int d=0;d<5;d++){
        printf("%d ",g[d]);
        // 10 20 30 35 40
    }

    // increase siz of array 
    int *f=new int[10];
    int *gg=g;
     for(int ff=0;ff<5;ff++){
        f[ff]=g[ff];
        // 10 20 30 35 40
    }
    g=f;

    // new g array of size 10
    for(int dd=0;dd<10;dd++){
        printf("%d ",g[dd]);
        // 10 20 30 35 40
    }
    f=gg;
    free(f);


    return 0;
}