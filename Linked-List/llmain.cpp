#include<iostream>
#include <stdio.h>
#include "ll-functions.cpp"
using namespace std;

int main()
{   
    
    struct node*head=initialise(head,10);
    insert_end(head,25);
    insert_end(head,110);
    insert_end(head,210);
    insert_end(head,420);


    insertIndex(head,33,2);
    head=insertAtStart(head,5);
    head=insertAtStart(head,4);
    head=insertAtStart(head,3);
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
    return 0;
}