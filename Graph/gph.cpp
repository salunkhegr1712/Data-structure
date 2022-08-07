#include<iostream>
#include <stdio.h>
using namespace std;
int e=0;

const int v=5 ;



void addDEdge(int j[v][v],int x, int y){
    j[x-1][y-1]=1;
    e++;
    // cout<<j[x-1][y-1]<<endl;
}

void addUEdge(int j[v][v],int x, int y){
    j[x-1][y-1]=1;
    j[y-1][x-1]=1;
    // cout<<j[x-1][y-1]<<endl;
    // cout<<j[y-1][x-1]<<endl;
    e++;
}
void addWeightedUEdge(int j[v][v],int x, int y,int weight){
    j[x-1][y-1]=weight;
    j[y-1][x-1]=weight;
    // cout<<j[x-1][y-1]<<endl;
    // cout<<j[y-1][x-1]<<endl;
    e++;
}

void addWeightedDEdge(int j[v][v],int x, int y,int weight){
    j[x-1][y-1]=weight;
    e++;
    // cout<<j[x-1][y-1]<<endl;
}
void print(int a[v][v]){
    for (int i = 0; i < v; i++)
    {
        /* code */
        for (int j = 0; j < v; j++)
        {
           
            /* code */
            cout<<a[i][j]<< "  ";
            
        }
        cout<<endl;
        
    }
   
}
void nullify(int jj[v][v]){
    for (int i = 0; i < v; i++)
    {
        /* code */
        for (int j = 0; j < v; j++)
        {
        
            jj[i][j]=0;
          
        }
        
    }
}
int innerDegree(int j[v][v],int x){
    int sum=0;
    for (int i = 0; i < v; i++)
    {
        /* code */
        if (j[i][x-1]>0)
        {
            /* code */
            sum=sum+1;
        }
        

    }
    return sum;
    
}
int outerDegree(int j[v][v],int x){
    int sum=0;
    for (int i = 0; i < v; i++)
    {
        /* code */
        if (j[x-1][i]>0)
        {
            /* code */
            sum=sum+1;
        }
        

    }
    return sum;
    
}
int main()
{
    int j[v][v];
    nullify(j);
    // addUEdge(j,1,2);
    // addUEdge(j,1,4);
    // addUEdge(j,2,3);
    // addUEdge(j,3,1);
    // addUEdge(j,4,3);
    // print(j);
    // cout<<e;
    addWeightedDEdge(j,1,2,9);
    addWeightedDEdge(j,2,3,5);
    addWeightedDEdge(j,1,4,6);
    addWeightedDEdge(j,3,1,4);
    addWeightedDEdge(j,4,5,2);
    addWeightedDEdge(j,5,3,7);
    addWeightedDEdge(j,4,3,8);
    print(j);
    cout<<"inner degree of 3 is : "<<innerDegree(j,3)<<endl;
    cout<<"outer degree of 3 is : "<<outerDegree(j,3)<<endl;
    return 0;
}