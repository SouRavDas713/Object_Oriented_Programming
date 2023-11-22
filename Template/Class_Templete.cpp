/*
For example, a function to add two integer and float numbers requires two
functions. One function accept integer types and the other accept float types
as parameters even though the functionality is the same. Using a function
template, a single function can be used to perform both additions. It avoids
unnecessary repetition of code for doing same task on various data types.*/

#include<bits/stdc++.h>
using namespace std;
template <class T,class T1> //This a  example of class templete // you can use <typename T>
class rect
{
    T length ;
    T1 width ;
public:
    rect(T l,T1 w)
    {
        length = l;
        width = w;
    }
T1 showarea()     //return will be T1 type
{
    return length * width ; 
}
};
int main()
{
    rect <float,float> A1(4.7,5.9);
    cout<< A1.showarea() <<endl;
    return 0 ;
}