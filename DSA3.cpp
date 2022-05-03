// Move all negative numbers to beginning and positive to end with constant extra space
// order of element is not important here.

#include <iostream>
using namespace std;

int main()
{

    int arr[9] = {23, -64, 94, -2, -34, -74, 73, -3, 43};

    for (int i = 0; i <= 8; i++)
    {
        cout << arr[i] << "->";
    }
    cout << endl;
    int m = 0;
    int res[9];
    int start = 0;
    int end = 8;

    for (int i = 0; i <= 8; i++)
    {
        if (m > arr[i])
        {
            res[start] = arr[i];
            start++;
        }
        else
        {

            res[end] = arr[i];
            end--;
        }
    }

    for (int i = 0; i <= 8; i++)
    {
        cout << res[i] << "->";
    }
    return 0;
}