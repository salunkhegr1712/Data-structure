#include<iostream>
#include <stdio.h>
using namespace std;
struct gph{
    int v;
    int*graph[];

// a function who will assign values to all elements in 2d array 
void nullify(){
    for(int i=0;i<v;i++){
        int*a=graph[i];
        for(int j=0;j<v;j++){

            a[j]=-1;
        }
        
    }
}

// a function to assign list to each graph block 
void listCreator(){
    for(int i=0;i<v;i++){
        int*z=new int[v];
        graph[i]=z;
    }
}

// print graph  

void printMatrix(){
    for(int i=0;i<v;i++){
        int*a=graph[i];
        cout<<"vertex "<<i<<" => "; 
        for(int j=0;j<v;j++){
            if (a[j]>-1)
            {
                /* code */
                cout<<a[j] << ", ";
            }
            
            
        }
        cout<<endl;
    }
}

// adding a edge to graph 

void addEdge(int x,int y){
    int*z=graph[x];
    int*p=graph[y];
    z[y]=y;
    p[x]=x;
    
}

// printing neighbour of perticular vertices 
void printNeighbour(int x){
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


};