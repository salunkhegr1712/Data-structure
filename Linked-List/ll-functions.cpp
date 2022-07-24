#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *initialise(struct node *ptr, int data)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    return ptr;
}

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

int searchInList(struct node *head, int val)
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

void splay_search()
{
}

void insert_end(struct node *head, int val)
{
    struct node *ptr = head;

    while (ptr->next != NULL)
    {
        /* code */
        ptr = ptr->next;
    }
    struct node *n = initialise(n, val);
    ptr->next = n;
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
        n->next = ptr->next;
        ptr->next = n;
    }
}

struct node* insertAtStart(struct node *head, int value)
{
    struct node *n = initialise(n, value);
    n->next = head;
    head = n ;
    return head;
}

int index(struct node*head,int val){
    struct node*c=head;
    int i=-1;
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
    if (searchInList(head,val)==-1)
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

// struct node*sort(struct node*head){
//     struct node*ptr=head;
//     int a=minimumInList(head);
//     deleteNode(head,a);
//     int c=count(head);
//     struct node* h=initialise(head,a);
//     for (int i = 0; i < c -1; i++)
//     {
//         a=minimumInList(head);
//         insert_end(h,a);
//         head=deleteNode(head,a);
//     }
    
//     return h;
// }
