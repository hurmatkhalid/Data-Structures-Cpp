// This program is to find the largest number
#include <iostream>
#include <climits>
using namespace std;

int largest(int a[], int n)
{
    int l = INT_MIN; // this provides the lowest number in a range
    for (int i = 0; i < n; i++)
    {
        if (a[i] > l)
        {
            l = a[i];
        }
    }
    return l;
}

int main()
{
    int arr[5] = {5, 71, 32, 99, 12};
    cout << largest(arr, 5) << endl;
    return 0;
}