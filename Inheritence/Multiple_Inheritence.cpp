#include<bits/stdc++.h>
using namespace std;
class a
{
    public:
    void printa()
    {
        cout<<"I am From A class"<<endl;
    }
};
class b
{
    public:
    void printb()
    {
        cout<<"I am From B class"<<endl;
    }
};
class c
{
    public:
    void printc()
    {
        cout<<"I am From C class"<<endl;
    }
};
//Most Importent Part
//In Multiple Inheritance, one class is derived from multiple classes
class d : public a,public b,public c
{
    public:
    void printd()
    {
        cout<<"I am From D class"<<endl;
    }
};
int main()
{
    d ob;
    ob.printa();
    ob.printb();
    ob.printc();
    ob.printd();
    return 0;
} 