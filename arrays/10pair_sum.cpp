#include <iostream>
using namespace std;

// we need a sorted array for this
int main()
{
    int arr[] = {1, 3, 5, 7, 10, 11, 13};
    // we have to find the elements who sum up to 16
    int s = 16;
    // we will use two pointer approach for this problem.

    // an i pointer to point to the first element which will traverse forward
    int i = 0;
    // a j pointer which will start traversing from the end towards front
    int j = sizeof(arr) / sizeof(int) - 1;
    // sizeof(arr) gives its size in bytes, therefore we divide to get the number
    while (i < j)
    {
        int current_sum = arr[i] + arr[j];
        if (current_sum > s)
        {
            j--;
        }
        else if (current_sum < s)
        {
            i++;
        }
        else if (current_sum == s)
        {
            cout << arr[i] << " and " << arr[j] << endl;
            i++;
            j--;
        }
    }
    return 0;
}