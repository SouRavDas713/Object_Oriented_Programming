#include<bits/stdc++.h>
using namespace std;
//In Hierarchical Inheritance, there are multiple classes derived from one class.
class Shape
{
    public:
    shape()
    {
        cout<<"I am From Base Class = Shape"<<endl;
    }
};
class circle : public Shape
{
    public:
    void cir()
    {
        cout<<"I am From circle "<<endl;
    }
};
class rectangle : public Shape
{
    public:
    void rec()
    {
        cout<<"I am From rectangle "<<endl;
    }
};
int main()
{
    circle c;
    c.cir();
    c.shape();
    rectangle r;
    r.rec();
    return 0;
}