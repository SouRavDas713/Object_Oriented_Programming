/*
1. Inheritance is an essential part of OOP. Its big payoff is that it
permits code reusability.
2. Inheritance is the process of creating new classes, called derived
classes, from existing or base classes.
3. The derived class inherits the members of the base class , on top of
which it can add its own members.
4. The members of the class can be Public , Private or Protected
5. Classes that are derived from others inherit all the accessible
members of the base class. That means that if a base class includes 
a member A and we derive a class from it with another member
called B, the derived class will contain both member A and member B.
6. The main advantage of Inheritance is, it provides an
opportunity to reuse the code functionality and fast implementation time.
*/
#include<bits/stdc++.h>
using namespace std;
class EEE   //base class 
{
    public:
    void chemistry()
    {
        cout<<"Welcome To Chemistry Lab"<<endl;
    }
};
class CSE : public EEE
{
    public:
};
int main()
{
    CSE object1;
    object1.chemistry();
    return 0;
} 