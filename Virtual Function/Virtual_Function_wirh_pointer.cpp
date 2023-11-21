#include<bits/stdc++.h>
using namespace std;

class Base //base class
{
public:
    virtual void show() //virtual function
    {
        cout << "Base\n";
    }
};

class Derv1 : public Base //derived class 1
{
public:
    void show()
    {
        cout << "Derv1\n";
    }
};

class Derv2 : public Base //derived class 2
{
public:
    void show()
    {
        cout << "Derv2\n";
    }
};

int main()
{
    Derv1 dv1; //object of derived class 1
    Derv2 dv2; //object of derived class 2
    Base *ptr; //pointer to base class

    ptr = &dv1; //put the address of dv1 in the pointer
    ptr->show(); //execute

    ptr = &dv2; //put the address of dv2 in the pointer
    ptr->show(); //execute

    return 0;
}
