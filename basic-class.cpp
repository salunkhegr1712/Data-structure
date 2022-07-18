#include <iostream>
#include <stdio.h>
using namespace std;

class rectangle
{
protected:
    int length;
    int bredth;
    // pointer of class rectangle and it will acts same like the structure pointer
    rectangle *new1;

public:
    // it is constructor which get invoked as soon as object is initialised
    // ex: rectangle a;
    rectangle()
    {
        // cout<<"non parametric constructor is called on invoke of object without parameter"<<endl;
        length = 10;
        bredth = 10;
    };
    // it is parametric constructor and it will invoked when object invoked with parametric values
    rectangle(int a, int b)
    {
        // cout<<"parametric constructor is called on invoke of object with parameter"<<endl;
        length = a;
        bredth = b;
    };
    // destructor is called automatically after end of programme in order to delete allocated data and
    // freeup the space in RAM
    ~rectangle()
    {
        cout<<"Bye! Bye! Good Bye! khatam! Tata! Gaya!"<<endl;
        // cout<<"this destructor and it is been called at end of programm or to delete a object"<<endl;
    }

    // functions which can be called by the object after declaration
    void area()
    {
        cout << "area is : " << length * bredth << endl;
    }
    void perimeter()
    {
        cout << "perimeter is : " << 2 * length + 2 * bredth << endl;
    }
};

int main()
{
    // initialisation with no parametric constructor
    rectangle a;
    // initilisation with parametric constructor
    rectangle b(10, 20);
    a.area();
    b.area();
    a.perimeter();
    b.perimeter();
    // note we can fetch the function throught object but we cannot directly use the private values outside class
    return 0;
}
