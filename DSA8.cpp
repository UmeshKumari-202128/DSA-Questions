// Chocolate distribution problem:
// Given an array of n integers where each value represents the number of chocolates in a packet.
// Each packet can have a variable number of chocolates. There are m students, the task is to
// distribute chocolate packets such that:
// 1. Each student gets one packet.
// 2. The difference between the number of chocolates in the packet with maximum chocolates and
// packet with minimum chocolates given to the students is minimum.
// 1. Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3
// Output: Minimum Difference is 2
// 2. Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5
// Output: Minimum Difference is 6

#include <iostream>

using namespace std;

int main()
{

    int arr1[] = {3, 4, 1, 9, 56, 7, 9, 12};

    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "arrSize1 : " << arrSize1 << endl;
    int m;
    cout << "Enter the number of student : ";
    cin >> m;

    for (int i = 0; i < arrSize1; i++)
    {

        cout << arr1[i] << "->";
    }
    cout << endl;
    for (int i = 0; i < arrSize1; i++)
    {
        for (int j = i + 1; j < arrSize1; j++)
        {
            if (arr1[i] > arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    for (int i = 0; i < arrSize1; i++)
    {

        cout << arr1[i] << "->";
    }

    cout << endl;

    if (arrSize1 == 0 || m == 0)
    {
        return 0;
    }

    if (arrSize1 < m)
    {
        return -1;
    }
    int min = arr1[arrSize1 - 1], r;

    for (int i = 0; i + m - 1 < arrSize1; i++)
    {
        r = arr1[i + m - 1] - arr1[i];
        if (r >= 0 && r < min)
        {
            min = r;
        }
    }

    cout << min;
    return 0;
}