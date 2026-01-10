#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *start, T *end , int iSize)
{
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        end[iCnt] = start[iCnt];   
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int brr[5];

    CopyArray(arr, brr, 5);

    cout<<"Copied Integer Array : ";
    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<brr[iCnt]<<" ";
    }
    cout<<"\n";

    float Arr[] = {10.8f,20.8f,30.9f,40.0f,50.4f};
    float Brr[3];

    CopyArray(Arr, Brr, 3);

    cout<<"Copied Float Array : ";
    for(int iCnt = 0; iCnt < 3; iCnt++)  
    {
        cout<<Brr[iCnt]<<" ";
    }
    cout<<"\n";

    return 0;
}
