#include <iostream>
using namespace std;

class Demo
{
    public : 

    int Addition(int No1 , int No2)
    {
        cout<<"Addtion of two integers is :"<<"\n";
        return No1 + No2;
    }

    int Addition(int No1 , int No2 , int No3)
    {
        cout<<"Addtion of three integers is :"<<"\n";
        return No1 + No2 + No3;
    }

    float Addition(float No1 , float No2)
    {
        cout<<"Addtion of two floats is :"<<"\n";
        return No1 + No2;
    }

    double Addition(double No1 , double No2)
    {
        cout<<"Addtion of two Doubles is :"<<"\n";
        return No1 + No2;
    }
};

int main()
{
    Demo obj;

    int iret = obj.Addition(10,11);             // Addition@2ii(&obj , 10 , 11)
    cout<<"Addition of integers : "<<iret<<"\n";

    iret = obj.Addition(10,11,51);              // Addition@3iii(&obj , 10 , 11 , 51)
    cout<<"Addition of integers : "<<iret<<"\n";

    float fret = obj.Addition(10.5f,11.2f);    // Addition@2ff(&obj , 10.5f , 11.2f)
    cout<<"Addition of floats : "<<fret<<"\n";

    double dret = obj.Addition(10.6,11.5);     // Addition@2dd(&obj , 10.6 , 11.5)
    cout<<"Addition of integers : "<<dret<<"\n";

    return 0;
}