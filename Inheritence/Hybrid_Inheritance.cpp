/*
Hybrid inheritance is also known as Virtual Inheritance
It is a combination of two or more inheritance.
In hybrid inheritance, when derived class have multiple paths to a base class, a diamond problem occurs. 
It will result in duplicate inherited members of the base class.
To avoid this problem easily, we use Virtual Base Class .
In this case, derived classes should inherit base class by using Virtual Inheritance.

imagine B abd C is derived class of Base class A..then D came to derive B and C ..This is Diamond
*/


#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void eat()
    {
        cout<<"please eat A"<<endl;
    }
};
class B : virtual public A 
{
    public:
    void play()
    {
        cout<<"please Play B"<<endl;
    }
};
class C : virtual public A 
{
    public:
    void sleep()
    {
        cout<<"please sleep C"<<endl;
    }
};
//Important 
class D : public B,public C
{
    public:
    void study()
    {
        cout<<"please study D"<<endl;
    }
};
int main()
{
    D ob;
    ob.study();
    ob.sleep();
    ob.play();
    ob.eat();    //by using virtual D can get the property of A
    return 0;
}