#include<iostream>
#include <stdio.h>
using namespace std;

// a function who will assign values to all elements in 2d array 
void nullify(int*graph[],int v){
    for(int i=0;i<v;i++){
        int*a=graph[i];
        for(int j=0;j<v;j++){

            a[j]=-1;
        }
        
    }
}

// a function to assign list to each graph block 
void listCreator(int*graph[],int v){
    for(int i=0;i<v;i++){
        int*z=new int[v];
        graph[i]=z;
    }
    nullify(graph,v);
}

// print graph  

void printMatrix(int*graph[],int v){
    for(int i=0;i<v;i++){
        int*a=graph[i];
        cout<<"vertex "<<i<<" => "; 
        for(int j=0;j<v;j++){
            if (a[j]>-1)
            {
                /* code */
                cout<<a[j] << " ";
            }
            
            
        }
        cout<<endl;
    }
}

// adding a edge to graph 

void addEdge(int*graph[],int x,int y,int v){
    int*z=graph[x];
    int*p=graph[y];
    z[y]=y;
    p[x]=x;
    
}

// printing neighbour of perticular vertices 
void printNeighbour(int*graph[],int x,int v){
    int*a=graph[x];
    for (int i = 0; i < v; i++)
    {
        if (a[i]>-1)
        {
            cout<<i <<"  ";
        } 
        
    }
    cout<<endl;
    
}