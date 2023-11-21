#include<bits/stdc++.h>
using namespace std;
/*
A nested class is a class which is declared in another
enclosing class.

A nested class is a member and as such has the same
access rights as any other member.

The members of an enclosing class have no special access
to members of a nested class; the usual access rules shall
be obeyed.

A nested class is declared within the scope of another class. */

class A 
{
    public:
    class B 
    {
        public:
        int x;
        void put(int b)
        {
            x = b;
            cout<<"value is "<<x<<endl;
        }
    };
};
int main()
{
    A::B ob;
    ob.put(10);
    return 0;
}