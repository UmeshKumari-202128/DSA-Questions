// Find Frequency.
// Given a array of N positive integers and an integer X. The task is to find
// the frequency of X in vector.
//  Input: N= 5
// array = {1, 2, 2, 3, 5}
// X = 2
#include <iostream>
using namespace std;
int main()
{

    int arr[9] = {2, 5, 4, 2, 2, 3, 2, 3};
    int count = 0;
    for (int i = 0; i < 9; i++)
    {

        if (arr[i] == 2)
        {
            count++;
        }
    }
    cout << "The frequency is " << count << endl;
    return 0;
}