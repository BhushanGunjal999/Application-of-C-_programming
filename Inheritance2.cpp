#include <iostream>
using namespace std;

class Demo
{
    public :
     int A ,B;

     Demo()
     {
        A = 11;
        B = 21;
        cout<<"Inside Demo Constructor "<<"\n";
     }

    ~Demo()
     {
        cout<<"Inside Demo Destructor "<<"\n";
     }

     void fun()
     {
        cout<<"Inside Fun of demo "<<"\n";
     }
};

class Hello
{
    public :
     int X , Y;

     Hello()
     {
        X = 51;
        Y = 101;
        cout<<"Inside Hello Constructor "<<"\n";
     }

    ~Hello()
     {
        cout<<"Inside Hello Destructor "<<"\n";
     }

     void gun()
     {
        cout<<"Inside gun of Hello "<<"\n";
     }


};

class PPA: public Demo, public Hello
{
    public :
     int I , J;

     PPA()
     {
        I = 111;
        J = 121;
        cout<<"Inside PPA Constructor "<<"\n";
     }

    ~PPA()
     {
        cout<<"Inside PPA Destructor "<<"\n";
     }

     void sun()
     {
        cout<<"Inside sun of PPA "<<"\n";
     }


};
int main()
{
    cout<<"Inside Main"<<"\n";

    cout<<"size of Demo "<<sizeof(Demo)<<"\n";
    cout<<"size of Hello "<<sizeof(Hello)<<"\n";
    cout<<"size of PPA "<<sizeof(PPA)<<"\n";

    PPA pobj;

    pobj.fun();
    pobj.gun();
    pobj.sun();

    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";

    cout<<"End of Main "<<"\n";

    return 0;
}