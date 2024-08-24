#include <iostream>
using namespace std;

class Base
{
    public :
     int A , B;

    int Addition(int i , int j)
    {
       return i + j;
    }

    virtual int Substraction(int i , int j)
    {
       return i - j;
    }

    virtual int Multiplication(int i , int j) = 0; // Abstract Function


};

class Derived: public Base
{
    public :
     int X , Y;

     int Substraction(int i , int j)
     {
        int Ans = 0;
        Ans = i - j;
        return Ans;
     }

     int Multiplication(int i , int j) // Concrete Function
     {
        return i * j;
     }

};
int main()
{
    // Base bobj;  NA

    Base *bp = new Derived;
    int Ret = 0;

    Ret = bp->Addition(10,11);
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = bp->Substraction(10,11);
    cout<<"Substraction is : "<<Ret<<"\n";

    Ret = bp->Multiplication(10,11);
    cout<<"Multiplication is : "<<Ret<<"\n";

    
    return 0;
}