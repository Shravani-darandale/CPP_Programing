//Generic program to finf largestfrom three numbers
#include<iostream>
using namespace std;

template<class T>
T Maximum(T no1, T no2 , T no3)
{
    T ans;

    if(no1 >=no2 && no1 >=no3)
    {
        ans = no1;
    }
    else if(no2 >=no1 && no2 >= no3)
    {
        ans = no2;
    }
    else
    {
      ans = no3;
    }
    return ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Maximum(10,20,30);
    cout<<"Largest Integer :"<<iRet<<"\n";

    fRet = Maximum(10.5f,20.5f,30.8f);
    cout<<"Largest Float :"<<fRet<<"\n";
    
    return 0;
}