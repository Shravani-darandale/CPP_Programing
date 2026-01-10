#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *start,int iSize)
{
    T max = start[0];
    T smax = start[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(start[iCnt] > max)
        {
            smax = max;
            max = start[iCnt];
        }
        else if(start[iCnt] > smax && start[iCnt] != max)
        {
          smax = start[iCnt];
        }
    }
    return smax;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int iSize = 5;

    cout<<"Second Largest : "<<SecondMax(arr, iSize)<<"\n";
    return 0;

}