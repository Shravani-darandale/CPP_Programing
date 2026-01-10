////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name:   Addition                                                      
//  Description:    It is used to subract numbers
//  Input:          Two numbers(Generic)
//  Output:         Substraction of two numbers
//  Author:         Shravani Kishor Darandale
//  Date:           09/01/2026
//
////////////////////////////////////////////////////////////////////////


template<class T>
T  Substraction(T no1 , T no2)
{
  T subract  = 0;

  subract = no1 - no2;
  return subract;

}
////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
   int iRet = Substraction(20,10);
   cout<<"Substraction of integer is :"<<iRet<<endl;

   float fRet = Substraction(20.3f,10.5f);
   cout<<"Substraction of float is :"<<fRet<<endl;

    return 0;
}

////////////////////////////////////////////////////////////////////////
//
//Test cases successfully handled by application
//
//  Input : 20  10
// Output: Substraction of integer is : 10
//
// Input : 20.3  10.5 
// Output: Substraction of float is : 9.8
//  
////////////////////////////////////////////////////////////////////////
