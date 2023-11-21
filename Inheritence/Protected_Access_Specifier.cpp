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