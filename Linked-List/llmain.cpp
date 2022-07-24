#include<iostream>
#include <stdio.h>
#include "ll-functions.cpp"
using namespace std;

int main()
{   
    
    struct node*head=initialise(head,10);
    insert_end(head,110);
    insert_end(head,25);
    insert_end(head,420);
    insert_end(head,210);
    


    insertIndex(head,333,2);
    head=insertAtStart(head,14);
    head=insertAtStart(head,44);
    head=insertAtStart(head,98);
    // traverse(head); 
    display(head);
    printf("total number of nodes are : %d\n",count(head));
    cout<<"sum of all elements inside connected linked list is : "<<sumOfElements(head)<<endl;
    cout<<"Maximum element in whole linked list is : "<<maximumInList(head)<<endl;
    cout<<"Minimum element in whole linked list is : "<<minimumInList(head)<<endl;

    if (searchInList(head,210)==1)
    {
        cout<<"element is found!"<<endl;

    }
    else{
        cout<<"element is not found!"<<endl;
    }
    isSorted(head);
    // head=deleteHead(head);
    // head=deleteHead(head);
    // head=deleteHead(head);
    // head=deleteNode(head,5);
    // printf("index of value 420 is %d \n",index(head,4200));
    // deleteLastNode(head);
    // deleteLastNode(head);
    // deleteLastNode(head);
    // deleteNode(head,10);
    // deleteNode(head,210);
    // deleteNode(head,33);
    // head=sort(head);
    display(head);
    return 0;
}