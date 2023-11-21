#include<bits/stdc++.h>
using namespace std;
class A
{
    protected:
    int a;
    public:
    int b;
    void get()
    {
        cin>>a>>b;
    }
};
class B : public A
{
    public:
    void test()
    {
        cout<<a<<" "<<b <<endl;
    }
};
int main()
{
   B ob;
   ob.get();
   ob.test();
   return 0;

}
