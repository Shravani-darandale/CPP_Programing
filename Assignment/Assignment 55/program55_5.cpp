////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Maximum                                                      
//  Description:    Finds maximum among four generic values
//  Input:          Four generic values
//  Output:         Maximum values
//  Author:         Shravani Kishor Darandale
//  Date:           10/01/2026
//
////////////////////////////////////////////////////////////////////////


template<class T>
T  Maximum(T a , T b , T c, T d)
{
  T max = a;

  if(b > max)
    max = b;

  if(c > max)
    max = c;

  if(d > max)
    max = d;
  
    return max;
}
////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////

int main()
{
   int iRet = Maximum(10, 20, 15, 5);
    cout << "Maximum (int) : " << iRet << endl;

    float fRet = Maximum(3.5f, 7.8f, 2.1f, 6.4f);
    cout << "Maximum (float) : " << fRet << endl;

  return 0;
}

////////////////////////////////////////////////////////////////////////
//
//Test cases successfully handled by application
//
// Input : 20  10  15  5
// Output: 20
//
// Input : 3.5  7.8  2.1  6.4
// Output: 7.8  
//  
////////////////////////////////////////////////////////////////////////
