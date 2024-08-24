#include <iostream>
using namespace std;

class Demo
{
  public :
   int A,B;

   Demo()
   {
     cout<<"Inside Deafult Constructor "<<"\n";
   }

   Demo(int i , int j)
   {
     cout<<"Inside Parametrised Constructor "<<"\n";
   }

   ~Demo()
   {
     cout<<"Inside Destructor "<<"\n";
   }
};
int main()
{
    cout<<"Inside Main "<<"\n";

    Demo obj1;        // static memory Allocation of objects
    Demo obj2(11,21);

    Demo *p = new Demo();    // Dynamic memory Allocation of objects
    Demo *q = new Demo(11,21);

    delete p;
    delete q;

    cout<<"End of Main Function"<<"\n";

    return 0;
}