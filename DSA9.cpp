//  Longest Consecutive subsequence.
// Given an array of integers, find the length of the longest sub-sequence such that
// elements in the subsequence are consecutive integers, the consecutive numbers
// can be in any order.
// 1. Input: arr[] = { 1, 9, 3, 10, 4, 20, 2 }
// Output: 4 { 1, 3, 4, 2 }
// 2. Input: arr[ ] = { 36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42}
// Output: 5 { 36, 35, 33, 34, 32 }

#include <iostream>

using namespace std;

int main()
{

    int arr1[] = {1, 9, 3, 10, 4, 20, 2};

    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "arrSize1 : " << arrSize1 << endl;

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

    int count = 0;
    int mx = 0;

    for (int i = 0; i < arrSize1; i++)
    {

        if (i>0 && (arr1[i] == arr1[i-1] + 1))
        {
            count++;}
          else  if (i>0 && arr1[i]== arr1[i-1])
            {
                continue;
            }
           else{
               count = 1;
            
        }
         
        mx = max(mx,count);

        
    }
    cout << endl;
    cout << mx;
    return 0;
}