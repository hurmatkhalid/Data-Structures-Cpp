#include <iostream>
using namespace std;
int main()
{
    int n, left = -1, right = -1;
    int maximumsum = 0, currentsum = 0;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    // this is the cummulative sum which starts with zero
    int cum_sum[1000];
    //= {0};
    int a[1000];
    cout << "Enter the first element of your array" << endl;
    cin >> a[0];
    cum_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element" << endl;
        cin >> a[i];
        cum_sum[i] = cum_sum[i - 1] + a[i];
    }

    // here we don't wanna generate sub arrays
    // we only wanna calculate the cummulative sum

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentsum = 0;
            currentsum = cum_sum[j] - cum_sum[i - 1];
            if (currentsum > maximumsum)
            {
                maximumsum = currentsum;
                left = i;
                right = j;
            }
        }
    }
    cout << maximumsum << endl;

    for (int k = left; k <= right; k++)
    {
        cout << a[k] << ", ";
    }
    cout << endl;
    return 0;
}