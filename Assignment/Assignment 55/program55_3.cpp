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
//  Description:    It is used to divide numbers
//  Input:          Two numbers(Generic)
//  Output:         Division of two numbers
//  Author:         Shravani Kishor Darandale
//  Date:           10/01/2026
//
////////////////////////////////////////////////////////////////////////


template<class T>
T  Division(T no1 , T no2)
{
  T divide  = 0;

  divide = no1 / no2;

  return divide;

}
////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
   int iRet = Division(20,10);
   cout<<"Division of integer is :"<<iRet<<endl;

   float fRet = Division(20.3f,10.5f);
   cout<<"Division of float is :"<<fRet<<endl;

    return 0;
}

////////////////////////////////////////////////////////////////////////
//
//Test cases successfully handled by application
//
//  Input : 20  10
// Output: Division of integer is : 2
//
// Input : 20.3  10.5 
// Output: Division of float is : 1.93333
//  
////////////////////////////////////////////////////////////////////////
