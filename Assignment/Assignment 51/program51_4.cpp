#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,30,40,10,40,10};

    int iRet = SearchLast(arr, 9, 40);

    cout << iRet;

    return 0;
}
