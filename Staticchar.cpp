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

};
// Initilization of static charactiristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    cout<<"Value of X : "<<Demo::X<<"\n";
    cout<<"Value of Y : "<<Demo::Y<<"\n";

    Demo obj1;
    Demo obj2;

    cout<<"Value of A from obj1 "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 "<<obj2.A<<"\n";

    obj1.A++;

    cout<<"Value of A from obj1 "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 "<<obj2.A<<"\n";

    // cout<<"Value of X from obj1 "<<obj1.X<<"\n";
    // cout<<"Value of X from obj2 "<<obj2.X<<"\n";

    cout<<"size of Demo class obj is : "<<sizeof(obj1)<<"\n";



    return 0;
}