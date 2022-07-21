#include<iostream>
#include <stdio.h>
using namespace std;
void hanoi(int n,char src,char dist,char intm){
    if (n==0)
    {
        return;
    }
    hanoi(n-1,src,intm,dist);
    cout<<"moving disk number "<<n<< " from "<<src<< " to "<<dist<<endl;
    hanoi(n-1,intm,dist,src);
}

void towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod) 
{ 
    if (n == 0) 
    {
        return; 
    } 
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
    cout << "Move disk " << n << " from rod " << from_rod <<
                                " to rod " << to_rod << endl; 
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 

int main()
{
    int n = 4; // Number of disks 
    hanoi(n, 'A', 'C', 'B');
    // towerOfHanoi(n, 'A', 'C', 'B');

 return 0;
}