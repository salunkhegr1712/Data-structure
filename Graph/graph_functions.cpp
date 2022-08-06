#include<iostream>
#include <stdio.h>
using namespace std;


struct node {
    int key;
    int*ptr;
    node*down;
};

void initialise(struct node*p,int key,int vertices){
    p->key=key;
    int*arr=new int(vertices);
    p->ptr=arr;
    p->ptr++;
    p->down=NULL;
};

struct node* insertVertices(struct node *p,int key,int vertices){
    struct node*n1=p;
    if (p->down==NULL)
    {
        /* code */
        struct node*n2;
        initialise(n2,key,vertices);
        n1->down=n2;
        printf("success\n");
        
    }
    else{

        while (n1->down!=NULL)
        {
            /* code */
            n1=n1->down;
        }
        
        struct node*n2;
        initialise(n2,key,vertices);
        n1->down=n2;
    }
    return p;
}

