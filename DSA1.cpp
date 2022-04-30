// Find the reverse of array. You must do this by modifying the input array in place
// with 0(1) extra memory.

#include <iostream>
using namespace std;
int main()
{

    int arr[7] = {23, 64, 94, 2, 34, 74, 73};
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << "->";
    }
    cout << endl;

    int res[7];
    int j = 0;

    for (int i = 6; i >= 0; i--)
    {
        res[j] = arr[i];
        cout << res[j] << "->";
        j++;
    }

    return 0;
}