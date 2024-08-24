#include <iostream>
using namespace std;

class Demo
{
    public : 
     int A , B;    // Non static charactiristics
     static int X , Y;  // static charactiristics

     Demo()  // Deafult constructor
     {
        // Initilization of Non static charactiristics
        A = 0;
        B = 0;
     }

     void fun()  // void fun(Demo * this)
     {
      cout<<"Inside Non Static function fun"<<"\n";
      cout<<"Value of A "<<this->A<<"\n";
      cout<<"Value of B "<<this->B<<"\n";
      cout<<"Value of X "<<X<<"\n";
      cout<<"Value of Y "<<Y<<"\n";

     }

     static void gun()
     {
      cout<<"Inside Static function gun"<<"\n";
      cout<<"Value of X "<<X<<"\n";
      cout<<"Value of Y "<<Y<<"\n";
    }

};
// Initilization of static charactiristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    Demo::gun();

    Demo obj;

    obj.fun();  // fun(&obj)

    obj.gun();  // its Allowed but not do
    
    return 0;
}