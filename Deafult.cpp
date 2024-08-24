#include <iostream>
using namespace std;

float Area(float radius , float PI = 3.14f)
{
    float Ans = 0.0f;
    Ans = PI * radius * radius;
    return Ans;
}
int main()
{
    float R = 0.0f;
    float fret = 0.0f;

    cout<<"Enter the Radius "<<"\n";
    cin>>R;

    fret = Area(R);
    cout<<"Area of circle is "<<fret<<"\n";

    fret = Area(R , 7.1f);
    cout<<"Area of circle is "<<fret<<"\n";
    
    return 0;
}