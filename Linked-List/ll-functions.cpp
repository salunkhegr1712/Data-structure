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

void deleteNode(struct node*ptr,int val){
    
}