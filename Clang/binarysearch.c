#include <stdio.h>

int binarySearch(int p[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (p[mid] == x)
        {
            return mid;
        }
        if (p[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 10, 15, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element not present") : printf("Element is prsent at index %d", result);
    return 0;
}
// time complexity O(logN)