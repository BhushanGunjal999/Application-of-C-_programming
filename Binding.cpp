#include <iostream>
using namespace std;

class Demo
{
  public :

  void fun()
  {
    cout<<"Inside Fun "<<"\n";
  }

  void gun()
  {
    cout<<"Inside gun "<<"\n";
  }
};
int main()
{
    Demo obj;

    cout<<"Size of obj "<<sizeof(obj)<<"\n";

    obj.fun();
    obj.gun();
    
    return 0;
}