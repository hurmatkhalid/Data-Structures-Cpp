#include <stdio.h>
int linear_search(int p[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (p[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    int result = linear_search(arr, n, 2);
    if (result == -1)
    {
        printf("Element is not present in the array");
    }
    else
    {
        printf("Element is present at index %d", result);
    }
    return 0;
}
// time complexity: if its present at first index ,best case o(1)
// worst case o(n)
// average: o(n)
