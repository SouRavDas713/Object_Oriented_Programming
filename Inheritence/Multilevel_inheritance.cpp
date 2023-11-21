/*In Multilevel inheritance, one class is derived from a
class which is also derived from another class.*/
#include<bits/stdc++.h>
using namespace std;
class a
{
    public:
    void f1()
    {
        cout<<"I am from A"<<endl;
    }
};
class b:public a 
{
    public:
    void f2()
    {
        cout<<"I am from B"<<endl;
    }
};
class c:public b
{
    public:
    void f3()
    {
        cout<<"I am from C"<<endl;
    }
};
class d:public c 
{
     public:
    void f4()
    {
        cout<<"I am from D"<<endl;
    }
};
int main()
{
    d ob;
    ob.f1();
    ob.f2();
    ob.f3();
    ob.f4();
    return 0;
}