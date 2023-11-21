/*
Two base classes have functions with the same name,while a class derived from both base classes. How do
objects of the derived class access the correct base class function? The name of the function alone is insufficient,
since the compiler can’t figure out which of the two functions is meant.
*/
#include<bits/stdc++.h>
using namespace std;

  class EEE   //base class 
{
    public:
    void chemistry()
    {
        cout<<"Welcome To Chemistry Lab off EEE"<<endl;
    }
};
class CSE
{
    public:
    void chemistry()
    {
        cout<<"Welcome To Chemistry Lab off CSE"<<endl;
    }
};
class Civil : public EEE , public CSE 
{
    public:
};
int main()
{
    Civil object1;
    object1.EEE::chemistry();   // important
    object1.CSE::chemistry();
    return 0;
}