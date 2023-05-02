#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int temp;
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    printf("Reversed array is \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}