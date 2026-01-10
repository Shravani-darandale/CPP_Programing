//generic program to reverse array
#include <iostream>
using namespace std;


template <class T>
T Reverse(T *arr, int iSize)
{
    T start = 0;
    T end = iSize - 1;
    T temp;

    while(start < end)
    {
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;

      start++; 
      end--;
    }
    
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

    cout<<"Before reverse :";
    Display(arr, size);

    Reverse(arr,size);

    cout<<"After reverse :";
    Display(arr, size);

    return 0;
}
