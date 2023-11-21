#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Base"<<endl;
    }
    base(int a)
    {
        cout<<"From Base : value "<<a<<endl;
    }
};
class derived : public base
{
    public:
    derived():base()
    {
        cout<<"Derived"<<endl;
    }
    derived(int b):base(b)
    {
        cout<<"From Derived : value "<<b<<endl;
    }
};
int main()
{
    derived ob1,ob2(10);
    return 0;
}