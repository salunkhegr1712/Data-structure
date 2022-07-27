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
    // printf("===================================================================\n");
    // display(head);
    // printf("===================================================================\n");
    // last=adjustLast(head);
    // // display_reverse(last);
    // traverse_reverse(last);
    // printf("===================================================================\n");
    
    // printf("last is : %d\n",last->data);
    // printf("head is : %d\n",head->data);
    
    // printf("%d\n",maximumInList(head));
    // printf("%d\n",minimumInList(head));
    printf("%d\n",count(head));
    printf("%d\n\n",sumOfElements(head));

    // insertIndex(head,34,3);
    // insertIndex(head,35,4);
    // head=insertAtStart(head,11);
    // head=insertAtStart(head,13);
    // head=deleteHead(head);
    // head=deleteHead(head);
    // deleteLastNode(head);
    // deleteLastNode(head);
    head=deleteNode(head,20);
    last=adjustLast(head);
    traverse(head);
    printf("===================================================================\n");
    traverse_reverse(last);
    // printf("%d\n",search(head,23));
    // printf("%d\n",search_reverse(last,11));
    // printf("\n%d\n",index(head,23));
    // printf("%d\n",head->data);
    // printf("%d",search(head,23));;
    // isSorted(head);
    return 0;
}