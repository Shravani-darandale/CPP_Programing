#include<iostream>
using namespace std;

template<class T>
void Display(T Value , int Size)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= Size; iCnt++)
    {
        cout<<Value<<" ";
    }
    cout<<endl;    //Move cursor to next line
    //cout<<"\n";
}
int main()
{
    Display('M',7);
    Display(11 , 3);
    Display(3.7,6);
    
    return 0;
}
