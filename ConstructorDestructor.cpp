#include <iostream>
using namespace std;

class Demo
{
   public :
    int No1;
    int No2;

    Demo()
    {
        cout<<"Inside Deafult constructor \n";
        No1 = 0;
        No2 = 0;
    }

    Demo(int A , int B)
    {
        cout<<"Inside Parametrised constructor \n";
        No1 = A;
        No2 = B;
    }

    Demo(Demo &ref)
    {
        cout<<"Inside Copy Constructor \n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    ~Demo()
    {
        cout<<"Inside Destructor \n";
    }

    void fun()
    {
        cout<<"Inside Fun \n";
    }

    void gun()
    {
        cout<<"Inside gun \n";
    }
};
int main()
{
    cout<<"Inside Main \n";

    Demo obj1;

    cout<<"Value of No1 from obj1 : "<<obj1.No1<<"\n";
    cout<<"Value of No2 from obj1 : "<<obj1.No2<<"\n";

    Demo obj2(11,21);

    cout<<"Value of No1 from obj2 : "<<obj2.No1<<"\n";
    cout<<"Value of No2 from obj2 : "<<obj2.No2<<"\n";

    Demo obj3(obj2);

    cout<<"Value of No1 from obj3 : "<<obj3.No1<<"\n";
    cout<<"Value of No2 from obj3 : "<<obj3.No2<<"\n";

   return 0;
}