#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node*next;
    struct node*prev;

};

struct node* initialise(struct node*ptr,int data){
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    ptr->prev=NULL;
    return ptr;
};

void append(struct node*ptr,int val){
    
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    struct node*c=initialise(c,val);
    ptr->next=c;
    c->prev=ptr;
};

void traverse(struct node *head)
{
    struct node *ptr = head;
    int i = 0;
    while (ptr)
    {
        /* code */
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void display(struct node *head)
{
    if (head != NULL)
    {
        printf("%d\n", head->data);
        display(head->next);
    }
    else
    {
        return;
    }
}
void traverse_reverse(struct node *head)
{
    struct node *ptr = head;
    int i = 0;
    while (ptr)
    {
        /* code */
        printf("%d\n", ptr->data);
        ptr = ptr->prev;
    }
}

// void display_reverse(struct node *head)
// {
//     if (head != NULL)
//     {
//         printf("%d\n", head->data);
//         display(head->prev);
//     }
//     else
//     {
//         return;
//     }
// }

struct node*adjustLast(struct node*c){
    while (c->next!=NULL)
    {
        c=c->next;
    }
    return c;
}

int count(struct node *head)
{
    struct node *ptr = head;
    int i = 0;
    while (ptr)
    {
        i = i + 1;
        ptr = ptr->next;
    }
    return i;
}

int sumOfElements(struct node *head)
{
    struct node *ptr = head;
    int i = 0;

    while (ptr)
    {
        i = i + ptr->data;
        ptr = ptr->next;
    }
    return i;
}


int maximumInList(struct node *head)
{
    struct node *ptr = head;
    int max;
    max = ptr->data;
    while (ptr)
    {
        if (max <= ptr->data)
        {
            max = ptr->data;
        }
        ptr = ptr->next;
    }
    return max;
}

int minimumInList(struct node *head)
{
    struct node *ptr = head;
    int min;
    min = ptr->data;
    while (ptr)
    {
        if (min >= ptr->data)
        {
            min = ptr->data;
        }
        ptr = ptr->next;
    }
    return min;
}


void insertIndex(struct node *head, int value, int index)
{
    int k = count(head);
    int i = 0;
    if (index > k)
    {
        printf("index error \n");
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL && i != index - 1)
        {
            ptr = ptr->next;
            i = i + 1;
        }

        struct node *n = initialise(n, value);
        struct node*z=ptr->next;
        n->next = ptr->next;
        z->prev=n;
        ptr->next = n;
        n->prev=ptr;
    }
}

struct node* insertAtStart(struct node *head, int value)
{
    struct node *n = initialise(n, value);
    n->next = head;
    head->prev=n;
    head = n ;
    return head;
}


int search(struct node *head, int val)
{
    struct node *ptr = head;
    while (ptr)
    {
        if (val == ptr->data)
        {
            return 1;
        }
        ptr = ptr->next;
    }
    return -1;
}

int search_reverse(struct node *last, int val)
{
    struct node *ptr = last;
    while (ptr)
    {
        if (val == ptr->data)
        {
            return 1;
        }
        ptr = ptr->prev;
    }
    return -1;
}

int index(struct node*head,int val){
    struct node*c=head;
    int i=0;
    while (c!=NULL)
    {
        if (c->data == val)
        {
            return i;
            /* code */
        }
        i=i+1;
        c=c->next;
        
    }
    return i;
    
}

void isSorted(struct node*head){
    struct node*ptr=head;
    while (ptr->next!=NULL)
    {
        /* code */
        if (ptr->data > ptr->next->data)
        {
            printf("Linked list is not sorted !!\n");
            return;
        }
        ptr=ptr->next;
        
    }
    printf("Linked list is sorted !!\n");
    
}


struct node*deleteHead(struct node*head){
    struct node*ptr=head;
    head=head->next;
    head->prev=NULL;
    delete(ptr);
    return head;
}

void deleteLastNode(struct node*head){
    struct node*ptr=head;
    struct node*p;
    while (ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    p=ptr->next;
    ptr->next=NULL;
    delete(p);

}

struct node* deleteNode(struct node*head,int val){
    if (search(head,val)==-1)
    {
        printf("Error Value not found !!\n");
        return head;
    }
    
    struct node*ptr=head;
    int a=index(head,val);
    int cnt=count(head);
    if(a==0){
        head=deleteHead(head);
    }
    else if (a==cnt-1)
    {
        deleteLastNode(head);
    }

    else{
        // order q p ptr 
        struct node*p=head;
        struct node*q=head->next;
        while (q!=NULL)
        {
            if (q->data==val)
            {
                struct node*f=q->next;
                f->prev=p;
                p->next=q->next;
                delete(q);
                return head;
            }
            p=q;
            q=q->next;
         
        }
        
        
    }
    return head;

}
