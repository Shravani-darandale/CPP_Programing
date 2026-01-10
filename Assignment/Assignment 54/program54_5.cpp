//generic program to find smallest element of array
#include <iostream>
using namespace std;


template <class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];

   for(int iCnt = 1; iCnt <iSize ; iCnt++)
   {
    if(arr[iCnt] < min)
    {
        min = arr[iCnt];
    }
   }
   return min;
    
}

template <class T>
void Display(T *arr, int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{

    int arr[] = {11, 21, 5, 101, 104, 111};
    int size = sizeof(arr) / sizeof(arr[0]);

    Display(arr , size);

    cout<<"Smallest value : "<<Min(arr,size)<<endl;

    return 0;
}
