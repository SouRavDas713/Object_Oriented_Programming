

#include<bits/stdc++.h>
using namespace std;

class salary
{
    int money;
public:
    salary()
    {
        money = 0;
    }
    salary(int m)
    {
        money = m;
    }
    bool  operator > (salary a)
    {
        return money > a.money;
    }
    /*bool  operator < (salary a)
    {
        return money < a.money;
    }*/
    salary operator + (salary a)
    {
        salary temp;
        temp.money = money + a.money;
        return temp;
    }
    salary operator - (salary a)
    {
        salary temp;
        temp.money = money - a.money;
        return temp;
    } 
     salary operator - ()   //for non negetive value
    {
        salary temp;
        temp.money = -money; // Unary minus operator
        return temp;
    }
    void show()
    {
        cout << "The answer is " << money << endl;
    }
};

int main()
{
    salary income(15000),expence(20000),savings;
    if(income>expence)
    {
        savings = income - expence;
    }
    else
    {
        savings = income - expence;
    }
    savings = - savings;
    savings.show();
    return 0;
}
