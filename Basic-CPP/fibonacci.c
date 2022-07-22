
#include <stdio.h>


int fib(int n){
    int i=0,j=1;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
    
}

void fibonacci(int j){
    if (j==1)
    {
        printf("0\n");
    }
    else if(j==2)
    {
     printf("0");   
     printf("1");
    }
    else
    {
        for (int i = 1; i <=j; i++)
        {
            printf("%d\n",fib(i));
        }
        
    }
    
    
    
}
int main()
{
    int a;
    scanf("%d",&a);
    fibonacci(a);
    
    return 0;
}