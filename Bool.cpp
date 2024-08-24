#include <iostream>
using namespace std;

bool checkeven(int No)
{
    if ((No % 2) == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int value = 0;

    bool Bret;

    cout<<"Enter the Number : \n";
    cin>>value;

    Bret = checkeven(value);

    if (Bret == true)
    {
        cout<<"It is a Even Number \n";
    }
    else
    {
        cout<<"It is a Odd Number \n";
    }

    return 0;
}