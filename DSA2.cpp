// Write a program to find minimum and maximum element of an array. Your program should
// accept n elements all integer values then the program should display the minimum
// and maximum element in the array with their corresponding index number.

#include <iostream>
using namespace std;
int main()
{

    int arr[7] = {23, 64, 94, 2, 34, 74, 73};
    int max = arr[0];
    int min = arr[0];
    int n, m;
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            n = i;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            m = i;
        }
    }
    cout << "The maximum value is " << max << " at index " << n << endl;
    cout << "The minimun value is " << min << " at index " << m << endl;

    return 0;
}