#include <iostream>
using namespace std;

int main()
{
    int maximumsum = 0;
    int n;
    cin >> n;
    int left;
    // = -1;
    int right;
    // = -1;

    // input the array
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // generating sub arrays

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currentsum = 0;
            for (int k = i; k <= j; k++)
            {
                currentsum += a[k];
                cout << a[k] << " , ";
            }
            if (currentsum > maximumsum)
            {
                maximumsum = currentsum;
                left = i;
                right = j;
            }
            cout << endl
                 << currentsum << endl;
        }
    }
    cout << maximumsum << endl;

    for (int k = left; k <= right; k++)
    {
        cout << a[k] << ", ";
    }
    return 0;
}