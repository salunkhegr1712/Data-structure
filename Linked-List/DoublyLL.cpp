#include<iostream>
#include <stdio.h>
#include "DoublyLLFunctions.cpp"

using namespace std;

int main()
{
    struct node*head =initialise(head,10);
    struct node*last=initialise(last,100);
    head->next=last;
    last->prev=head;
    append(head,20);
    append(head,21);
    append(head,22);
    append(head,23);
    traverse(head);
    printf("===================================================================\n");
    display(head);
    printf("===================================================================\n");
    last=adjustLast(head);
    // display_reverse(last);
    traverse_reverse(last);
    printf("===================================================================\n");
    
    printf("last is : %d\n",last->data);
    printf("head is : %d\n",head->data);
    deleteHead(head);
    
    return 0;
}