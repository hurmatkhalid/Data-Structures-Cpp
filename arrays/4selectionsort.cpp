#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // n-1 in next line because the last one gets sorted automatically
    for (int i = 0; i < n - 1; i++)
    {
        int min_element = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_element])
            {
                min_element = j;
            }
        }
        swap(arr[min_element], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}