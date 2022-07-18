#include <iostream>
#include <stdio.h>
using namespace std;

struct card
{
    int facevalue; // for A-K is 1-13
    int colour;    // 0: Black, 1:Red
    int type;      //  0:clubs, 1:spades, 2:diamonds, 3:heart
};

int main()
{
    int m[5];
    // EACH INterger occupies 4 bit of the data
    // lets learn  the for each loop
    // just assign a integer to the array and the
    // for loop will print them in such a way that they will get printed one by one
    int n;
    // cout<<"Enter the size of the array you want:"<<endl;

    // cin >> n;
    int arr = 1;
    cout << *(&arr) << endl;
    // for(int x:arr){

    //     cout<<x<<endl;
    // }
    // the values are should be printed and you dont know from where they came,
    // so values which are not assigned by you all are garbage values

    // these is how we can able to fetch the structure and use it properly

    // dynamically allocate the memory with the help of the malloc in c

    card *new1 = (card *)malloc(sizeof(card));
    // dynamically allocate the memory with the help of the malloc in cpp with the help of new keyword
    // datatype *variable_name=new datatype(sizeof(datatype)) syntax for new in the c++
    card *hell = new card[sizeof(card)];
    card *h1;
    // hell->facevalue=10;
    // hell->colour=0;
    // hell->type=0;
    // printf("%d %d %d \n", hell->colour,hell->facevalue, hell->type);
    // printf("size of the normally allocated structure variable is :: %ld\n", sizeof(h1));
    // printf("size of the normally allocated structure variable is :: %ld\n", sizeof(hell));
    int aa[10];
    // we can fetch array with pointers
    int*p=aa;
    // p=&aa; //referncing the addrees to the p pointer
    // printf("the value of aa is %d and address is %d",p,&aa);
    // *p is dereferencing the value stored at that perticular location
    // for(int i=0;i<sizeof(aa)/4;i++){
    //     printf("%d\n",p[i]);
    // }

    
    // pointers take 8 byte of memory
    // delete and free are keys used for deleting memory from memory 
    int ff=10;
    int &gg=ff; //gg is nickname of ff and you can fetch value of ff through gg
    int*ee=&ff;
    // all ff gg and *ee give value of same location
    // this reference only can be used for cpp lang not c
    cout<<"Values are:: "<< endl<< ff<<endl<<gg<<endl<<*ee<<endl;

    cout<<"locations are:: "<< endl<< &ff<<endl<<&gg<<endl<<ee<<endl;

    return 0;
}

// when you initialise something with datatype it allocate memory in stack
// when you initialse something with malloc it allocated in program at heap