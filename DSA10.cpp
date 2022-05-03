// Find minimum number of merge operations to make an array palindrome.
// Given an array of positive integers. We need to make the given array a ‘Palindrome’.
// The only allowed operation is “merging” (of two adjacent elements). Merging two
// adjacent elements means replacing them with their sum. The task is to find the
// minimum number of merge operations required to make the given array a
// ‘Palindrome’.
// 1. Input : arr[] = {15, 4, 15}
// Output : 0
// 2. Input : arr[] = {1, 4, 5, 1}
// Output : 1
// 3. Input : arr[] = {11, 14, 15, 99}
// Output : 3

#include <iostream>

using namespace std;

int findMinOps(int arr1[], int n)
{
    int ans = 0;
    for (int i = 0, j = n - 1; i <= j;)
    {

        if (arr1[i] == arr1[j])
        {
            i++;
            j--;
        }

        else if (arr1[i] > arr1[j])
        {
            
            arr1[j-1] = arr1[j] + arr1[j - 1];

            j--,ans++;
        }

        else
        {
            
            arr1[i+1] = arr1[i] + arr1[i - 1];
           i++, ans++;
        }
    }

    return ans;
}

int main()
{

    int arr1[] = {11,14,15,99};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "arrSize1 : " << n << endl;
    cout << findMinOps(arr1, n) << endl;
    return 0;
}