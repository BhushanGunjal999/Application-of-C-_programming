#include <iostream>
using namespace std;

class Base
{
    public :
     int A , B;

     virtual void fun()
     {
        cout<<"Inside Fun of Base "<<"\n";
     }

     virtual void gun()
     {
        cout<<"Inside gun of Base "<<"\n";
     }

     virtual void sun()
     {
        cout<<"Inside sun of Base "<<"\n";
     }
};

class Derived: public Base
{
    public :
     int X , Y;

     void fun()
     {
        cout<<"Inside Fun of Derived "<<"\n";
     }

     virtual void sun()
     {
        cout<<"Inside sun of Derived "<<"\n";
     }

     virtual void run()
     {
        cout<<"Inside run of Derived "<<"\n";
     }
};
int main()
{
    cout<<"size of Base : "<<sizeof(Base)<<"\n";
    cout<<"size of Derived : "<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;

    bp->fun();
    bp->gun();
    bp->sun();
    // bp->run();


    return 0;
}