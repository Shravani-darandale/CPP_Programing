//accept N values from user and return smallest value
#include<iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T ans = arr[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < ans)
        {
            ans = arr[iCnt];
        }
    }
    return ans;
    
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = Max(arr, 5);
    cout<<"Smallest Integer is : "<<iRet<<endl;

    float fRet= Max(brr, 4);
    cout<<"Smallest Float is : "<<fRet<<endl;

    return 0;
}
