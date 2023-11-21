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
//just to remember that protected data can be inherits by derive but in derive class it became private
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