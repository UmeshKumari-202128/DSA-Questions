// Find union and intersection of two sorted array.
// 1. Input: arr1[ ] = {1, 3, 4, 5, 7} arr2[ ] = {2, 3, 5, 6}
// Output: union---> {1, 2, 3, 4, 5, 6, 7} intersection---> {3, 5}
// 2. Input: arr1[ ] = {1,1,1,2,2,7,9,9} arr2[ ] = {1,1,3,3,7,8,8,8}
// Output: union---> {1,2,3,7,8,9} intersection---> {1,2,7}

#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {1, 3, 4, 5, 7, 5, 6};
    int arr2[] = {2, 3, 5, 6};
    int res[100];
    int index = 0;
    int count;

    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << arrSize1 << endl;
    int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << arrSize2 << endl;

    // Union of two array
    if (arrSize1 < arrSize2)
    {
        count = arrSize1;
    }
    else
    {
        count = arrSize2;
    }

    for (int i = 0; i < count; i++)
    {
        if (arr1[i] == arr2[i])
        {

            res[index] = arr1[i];
            index++;
        }
        else
        {

            res[index] = arr1[i];
            index++;
            res[index] = arr2[i];
            index++;
        }
    }

    int j;
    for (j = 0; j < index; j++)
    {
        cout << res[j] << "->";
    }

    for (int i = count; i < arrSize1; i++)
    {
        res[j] = arr1[i];

        j++;
    }

    cout << endl;
    for (int h = 0; h < j; h++)
    {
        cout << res[h] << "->";
    }


    for(int m=0;m<j;m++){
        for(int n=m+1;n<j;n++){

            if(res[m]==res[n]){
                for(int f=n;f<j-1;f++){
                    res[f]=res[f+1];
                }
                j--;
                n--;
            }
        }
    }

    cout << endl;
    for (int h = 0; h < j; h++)
    {
        cout << res[h] << "->";
    }
    // Intersection of two array

    // for (int i = 0; i < count; i++)
    //     {
    //         if (arr1[i] == arr2[i])
    //         {
    //             res[index] = arr1[i];
    //             index++;
    //         }}

    // for (int j = 0; j < index; j++)
    //     {
    //         cout << res[j] << "->";
    //     }

    return 0;
}