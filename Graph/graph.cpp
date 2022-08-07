#include<iostream>
#include <stdio.h>
#include "graph_functions.cpp"
using namespace std;

int main()
{
    int v;
    v=5;
    gph graph;
    graph.v=v;
    // here we created a array of pointers 

    graph.listCreator();
    graph.nullify();
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,2);
    graph.addEdge(1,0);
    graph.addEdge(2,0);
    graph.addEdge(2,1);
    graph.addEdge(2,3);
    graph.addEdge(3,2);
    graph.addEdge(4,2);
    graph.addEdge(4,1);
    graph.printMatrix();
    cout<<"neighbours of 2 are:"<<endl;
    graph.printNeighbour(2);
    return 0;
}
