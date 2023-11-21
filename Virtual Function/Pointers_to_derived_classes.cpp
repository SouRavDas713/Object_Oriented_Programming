// Demonstrate pointer to derived class.
/*Base pointer can point to an object of any class which
is derived from that base class. The reverse is not true.*/
#include<bits/stdc++.h>
using namespace std;

class base
 { 
    int x;
    public:

void setx(int i) 
{ x = i; } 
int getx() 
{ return x; }
};
class derived: public base 
{ 
    int y;
    public:
void sety(int i) 
{ y = i; } 
int gety() 
{ return y; }
};

int main() 
{

base *p; // pointer to base type 
base b_ob; // object of base. 
derived d_ob; // object of derived
// use p to access base object 
p = &b_ob; 
p->setx(10); // access base object 
cout << "Base object x: " << p->getx() << '\n';

// use p to access derived object 
p = &d_ob; // point to derived object 
p->setx(99); // access derived object

// can't use p to set y, so do it directly 
d_ob.sety(88);
/*
the pointer p is declared as a pointer to the base class (base *p).
This means that the pointer p can only access the members and methods that are part of the base class. 
Since sety and gety are specific to the derived class (derived), 
attempting to use the pointer p to set or get the value of y directly through p would result in a compilation error.*/
cout << "Derived object x: " << p->getx() << '\n'; 
cout << "Derived object y: " << d_ob.gety() << '\n';

return 0;

}