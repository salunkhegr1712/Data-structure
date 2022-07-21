#include<iostream>
#
#include <stdio.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    
}

int ncr(int n,int r){
    int j1=fact(n),j2=fact(r),j3=fact(n-r);
    return j1/(j2*j3);
}

int ncr_recursive(int n, int r){
    if (r==0 || r==n)
    {
        return 1;
    }
    else{
        return ncr_recursive(n-1,r-1)+ncr_recursive(n-1,r);
    }
    

}
int main()
{
    int a=0,number=0,n2;
    scanf("%d",&number);
    scanf("%d",&n2);

    a=ncr_recursive(number,n2);
    printf("%d",a);
    
}