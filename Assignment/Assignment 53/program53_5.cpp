#include <iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
    }
}

template <class T>
void Display(T *arr, int iSize)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << arr[iCnt] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {11, 21, 51, 101, 104, 111};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    Display(arr, size);

    Replace(arr, size, 21, 99);  

    cout << "Modified array: ";
    Display(arr, size);

    return 0;
}
