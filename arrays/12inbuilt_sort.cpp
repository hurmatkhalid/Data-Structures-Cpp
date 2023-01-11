#include <iostream>
using namespace std;
// THIS IS THE INBUILT FUNCTION THAT CPP STL PROVIDES US
// we just have to call an already defined function

// ny default it sorts in ascending order

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // calling the sort functiom
    // it has two parameters, the starting index and the ending index, the array sorts in range of these parameters
    cout << "\nArray after sorting using "
            "default sort is : \n";
    sort(arr, arr + n); // to sort from beginning to end

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    // in case we had to sort from the second element, we were supposed to sort from arr+2
    return 0;
}
