#include <iostream>
using namespace std;

class Demo
{
    public :
     int A;
     int B;
     const int C;
     const int D;

     Demo() : C(11) , D(21)
     {
        A = 0;
        B = 0;
     }

     Demo(int i , int j , int k , int l) : C(k) , D(l)
    {
        A = i;
        B = j;
    } 

    void fun()
    {
        A++;
        B++;
       // C++;
       // D++;
    }

    void gun() const // (constant function)
    {
       // A++;
       // B++;
       // C++;
       // D++;
    }


}; 
int main()
{
    Demo obj1(11,21,51,101);
    const Demo obj2(11,21,51,101);

    obj1.fun();
    obj1.gun();

    // constant object can only call the constant method

    // obj2.fun();
    obj2.gun();

    return 0;
}