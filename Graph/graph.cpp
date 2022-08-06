#include<iostream>
#include <stdio.h>
#include "graph_functions.cpp"
using namespace std;

int main()
{
    int v;
    v=4;
    // here we created a array of pointers 
    int*graph[v];
    listCreator(graph,v);
    addEdge(graph,0,1,v);
    addEdge(graph,0,2,v);
    addEdge(graph,1,2,v);
    addEdge(graph,1,0,v);
    addEdge(graph,2,0,v);
    addEdge(graph,2,1,v);
    addEdge(graph,2,3,v);
    addEdge(graph,3,2,v);
    printMatrix(graph,v);
    cout<<"neighbours of 2 are:"<<endl;
    printNeighbour(graph,2,v);
    return 0;
}
