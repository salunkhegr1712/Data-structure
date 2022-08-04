#include <stdio.h>
#include<string.h>
int main()
{
    char s[]="gh\0dfd";
    printf("%s\n",s);
    printf("%ld",strlen(s));
    return 0;
}