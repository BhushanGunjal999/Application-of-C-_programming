#include <iostream>
// using namespace std;

namespace Marvellous
{
    class Demo
    {
        public : 
         int A;
         int B;

         Demo(int i = 10 , int j = 20)
         {
            A = i;
            B = j;
         }

    };
}

namespace Infosystem
{
    class Demo
    {
        public :
         int A;
         int B;

    };
}
int main()
{
    Marvellous::Demo obj1;

    Infosystem::Demo obj2;

    std::cout<<"Inside Main "<<"\n";

    return 0;
}