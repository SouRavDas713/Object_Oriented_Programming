#include<bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show() = 0; // pure virtual function
};

/* A class having at least one virtual function is called a polymorphic type.*/

class Derv1 : public Base
{
public:
    void show()
    {
        cout << "Derv1 \n";
    }
};


//A class is made abstract by declaring at least one of its functions as pure virtual function.


class Derv2 : public Base
{
public:
    void show()
    {
        cout << "Derv2 \n";
    }
};

int main()
{
    Base *arr[2]; // array of pointers to base class
    Derv1 dv1;    // object of derived class 1
    Derv2 dv2;    // object of derived class 2

    arr[0] = &dv1; // put the address of dv1 in the array
    arr[1] = &dv2; // put the address of dv2 in the array

    arr[0]->show(); // execute show() in both objects
    arr[1]->show();

    return 0;
}
