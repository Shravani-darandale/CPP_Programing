#include<iostream>
using namespace std;

template<class T>
T SecondMin(T *start,int iSize)
{
    T min = start[0];
    T smin = start[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(start[iCnt] < min)
        {
            smin = min;
            min = start[iCnt];
        }
        else if(start[iCnt] < smin && start[iCnt] != min)
        {
          smin = start[iCnt];
        }
    }
    return smin;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int iSize = 5;

    cout<<"Second Smallest : "<<SecondMin(arr, iSize)<<"\n";
    return 0;

}