#include <iostream>
using namespace std;

class Demo
{
   public :
    int No1;
    int No2;

    Demo(int i , int j)
    {
        No1 = i;
        No2 = j;
    }

    void fun() // void fun(Demo * this)
    {
       cout<<"Inside fun : "<<this->No1<<"\n";
       cout<<"Inside fun : "<<this->No2<<"\n";
    }

    void gun() // void gun(Demo * this)
    {
       cout<<"Inside gun : "<<this->No1<<"\n";
       cout<<"Inside gun : "<<this->No2<<"\n";

    }
};
int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    obj1.fun();  // fun(&obj1)  fun(100)
    obj2.gun();  // gun(&obj2)  gun(200)

    return 0;
}