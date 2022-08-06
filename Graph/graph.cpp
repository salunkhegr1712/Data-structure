#include<iostream>
#include <stdio.h>
#include "graph_functions.cpp"
using namespace std;


int main()
{
    int z=5;
    node a;
    node*head=&a;
    initialise(head,0,4);
    head=insertVertices(head,1,4);

    cout<<endl<<a.key<<endl<<a.down->key<<endl;
    head=insertVertices(head,2,4);
    return 0;
}