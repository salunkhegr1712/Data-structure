#include <stdio.h>
#include <ctype.h>
void ptt(char s)
{
    printf("%d\n", s);
}

int length(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i = i + 1;
        // ptt(s[i]);
    }
    return i;
}

void casereverse(char*s)
{
    int i = 0;
    int a=0;
    // printf("dbskkhfskbs");
    while (s[i] != '\0')
    {   
        char z=s[i];
        // isalpha return 1 for large case alphabets 
        // if you treat s[i] as number it will do comparision just like the numbers

        if (s[i]>=65 && s[i]<=90){
            //  it is used for the type cast and it give the ascii code for that 
            // perticular character
            a=(int)z+32;
            printf("%c",a);

        }
        // is alpha return 2 for small case  
        else if(s[i]>=97 && s[i]<=122)
        {
            a=(int)z-32;
            printf("%c",a);
        }

        else{
            // printf("\nhello\n");
            printf("%c",s[i]);
        }
        i=i+1;
    }
    printf("\n");
}

void tolowercase(char*s){
    int i=0,a=0;
    
    while (s[i] != '\0'){
        char z=s[i];
        // isalpha return 1 for large case alphabets 
        // if you treat s[i] as number it will do comparision just like the numbers

        if (s[i]>=65 && s[i]<=90){
            //  it is used for the type cast and it give the ascii code for that 
            // perticular character
            a=(int)z+32;
            printf("%c",a);

        }
        // is alpha return 2 for small case  
        else if(s[i]>=97 && s[i]<=122)
        {
           printf("%c",s[i]);
        }

        else{
            // printf("\nhello\n");
            printf("%c",s[i]);
        }
        i=i+1;
    }
    printf("\n");  
}

void touppercase(char*s){
    int i=0,a=0;
    
    while (s[i]!='\0')
    {
        /* code */
        char z=s[i];
        // isalpha return 1 for large case alphabets 
        // if you treat s[i] as number it will do comparision just like the numbers

        if (s[i]>=65 && s[i]<=90){
            //  it is used for the type cast and it give the ascii code for that 
            // perticular character
            printf("%c",s[i]);
            

        }
        // is alpha return 2 for small case  
        else if(s[i]>=97 && s[i]<=122)
        {
            a=(int)s[i]-32;
            printf("%c",a);
        }

        else{
            // printf("\nhello\n");
            printf("%c",s[i]);
        }
        i=i+1;
    }
    printf("\n");
        
}

int words(char*s){
    int i=0;
    int space=0;
    while (s[i]!='\0')
    {
        if (s[i]==' ')
        {
            space=space+1;
        }
        
        i=i+1;
    }
    return space+1;
}


int vowels(char*s){
    int i=0;
    int sp=0;
    while (s[i]!='\0')
    {
        if (s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='o'||s[i]=='u')
        {
            sp=sp+1;
        }
        
        i=i+1;
    }
    return sp;
}

int palindrome(char*c){
    int i=0;
    int j=j+1;
    int d=length(c);
    while (i<d/2)
    {
        if(c[i]==c[d-i-1]){
            j=j+1;
        }
        else{
            return -1;
        }
        i=i+1;
    }

    
    return 1;
}
int main()
{
    char s[] = "ghansham";
    char a = 'g';

    printf("%d\n", palindrome(s));
    // casereverse(s);
    // tolowercase(s);
    // touppercase(s);
    
    return 0;
}