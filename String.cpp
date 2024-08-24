#include <iostream>
using namespace std;

int strlenX(char *str)
{
    int icnt = 0;
    while (*str != '\0')
    {
        icnt++;
        str++;
        
    }
    return icnt;
    
}
int main()
{
    char Arr[10];
    int iRet = 0;

    cout<<"Enter your first Name :  "<<"\n";
    cin>>Arr;

    iRet = strlenX(Arr);

    cout<<"Length of name is "<<iRet<<"\n";

   return 0;
}