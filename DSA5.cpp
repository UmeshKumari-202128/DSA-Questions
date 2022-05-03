// Given an array of integers nums and an integer target, return indices of these two
// numbers such that they add up to target. You may assume that each input would have
// exactly one solution, and you may not use the same element twice.
// You may return answer in any order.

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int num[5] = {2, 8, 11, 32, 43};

    for (i = 0; i < 5; i++)
    {

        for (j = i + 1; j < 5; j++)
        {
            int result = num[i] + num[j];

            if (result == 40)
            {
                cout << "The sum of " << num[i] << " at index " << i << " and " << num[j] << " at index " << j << " is " << result << endl;
            }
            else
            {
                result = 0;
            }
        }
    }

    return 0;
}