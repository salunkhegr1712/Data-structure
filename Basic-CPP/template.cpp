#include <iostream>
#include <stdio.h>
using namespace std;

// template class is single class declared for multiple datatype in single class body 
template <class T>
class template1
{
private:
    /* data */
    T a;
    T b;

public:
    template1()
    {
        a = 10;
        b = 10;
    }
    template1(T i, T j)
    {
        a = i;
        b = j;
    }
    T add()
    {
        return a + b;
    }
    T sub()
    {
        return a - b;
    }
};

int main()
{
    // dont ever forget to specity datatype after template class otherwise it will through error 
    template1<int> s(20, 33);
    template1<float> ss(201.54, 33.53);
    cout << s.add() << endl;
    cout << s.sub() << endl;
    cout << ss.add() << endl;
    cout << ss.sub() << endl;
    //output
    // 53
    //  - 13 
    //  235.07 
    //  168.01

        return 0;
}