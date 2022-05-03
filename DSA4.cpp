// Given an array nums with n objects colored red, white, or blue sort them in place so
// that objects of same color are adjacent with the color in order red, white, blue.
// We will use integer 0, 1 and 2 to represent red, white and blue color respectively.

#include <iostream>
using namespace std;
int main()
{

    int num[6] = {2, 1, 2, 1, 0, 0};
    for (int i = 0; i <= 5; i++)
    {
        cout << num[i] << "->";
    }
    cout << endl;
    int res[6];
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < 6; i++)
    {
        if (num[i] == 2)
        {
            count1++;
        }
        else if (num[i] == 1)
        {
            count2++;
        }

        else if (num[i] == 0)
        {
            count3++;
        }
    }
    cout << count1 << " " << count2 << " " << count3 << endl;
    int j,k,l;
    for (j = 0; j < count1; j++)
    {
        res[j] = 2;
        cout << res[j] << endl;
    }

     for (k = 0; k < count2; k++)
    {
        int index=k+count1;
        res[index] = 1;
        cout << res[index] << endl;
    }

     for (l= 0; l < count3; l++)
    {
        int index=l+count1+count2;
        res[index] = 0;
        cout << res[index] << endl;
    }
    

   for (int i = 0; i <= 5; i++)
    {
        cout << res[i] << "->";
    }
return 0;
}