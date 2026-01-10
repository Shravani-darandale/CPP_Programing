//generic program to find sum of all even numbers
#include <iostream>
using namespace std;


template <class T>
T SumEven(T *arr, int iSize)
{
    T Sum = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((int)arr[iCnt] % 2) == 0)
        {
            Sum = Sum + arr[iCnt];
        }
    }
    return Sum;
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

    Display(arr, size);

    cout<<"Sum of Even numbers : " << SumEven(arr, size)<<endl;

    return 0;
}
