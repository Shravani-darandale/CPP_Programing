#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T *start,int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
         if(start[iCnt] > start[iCnt + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int iSize = 5;

    if(CheckSorted(arr,iSize))
    {
        cout<<"Array is sorted \n";
    }
    else
    {
      cout<<"Array is  not sorted \n";
    }
    return 0;

}