//generic program to search value in an array
#include <iostream>
using namespace std;


template <class T>
T Min(T *arr, int iSize)
{
    if (iSize <= 0) 
    {
        cout << "Error: Array is empty." << endl;
        return T(); 
    }

    T minVal = arr[0]; 

    for (int i = 1; i < iSize; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i]; 
        }
    }

    return minVal;
}


template <class T>
void Display(T *arr, int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {11, 21, 5, 101, 104, 111};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    Display(arr, size);

    cout << "Smallest element: " << Min(arr, size) << endl;

    float arrF[] = {11.5, 2.1, 5.6, 0.1};
    int sizeF = sizeof(arrF) / sizeof(arrF[0]);

    cout << "\nFloat array elements: ";
    Display(arrF, sizeF);

    cout << "Smallest element in float array: " << Min(arrF, sizeF) << endl;

    return 0;
}
