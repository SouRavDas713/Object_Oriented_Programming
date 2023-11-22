/*
Some common binary operators in computing include:
Relational Operators:
Equal (==)
Not equal (!=)
Less than (<)
Greater than (>)
Greater than or equal to (>=)
Less than or equal to (<=)
Logical Operator:
Logical AND (&&)
Logical OR (||)
Arithmetic Operator:
Plus (+)
Minus (
Multiplication (*)
Divide (/)
*/

#include<bits/stdc++.h>
using namespace std;

class weight
{
    int kilo;
public:
    weight()
    {
        kilo = 0;
    }
    weight(int k)
    {
        kilo = k;
    }
    weight operator + (weight a)
    {
        weight temp;
        temp.kilo = kilo + a.kilo;
        return temp;
    }
    void show()
    {
        cout << "The answer is " << kilo << endl;
    }
};

int main()
{
    weight ob1(10), ob2(20), ob3;
    ob3 = ob1 + ob2;

    ob3.show();
    return 0;
}
