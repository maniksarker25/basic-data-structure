/*
1. Constant Time: O(1)
The algorithm’s runtime doesn’t depend on the input size. It always takes the same amount of time to execute.

Example: Accessing an array element.
 */

#include <iostream>
using namespace std;

int getElement(int arr[], int index)
{
    return arr[index]; // Always takes the same time.
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << "Element at index 2: " << getElement(arr, 2) << endl;
    return 0;
}

/*
2. Linear Time: O(n)
The runtime increases directly with the size of the input because the algorithm goes through each element.

Example: Find the largest number in an array.
 */

#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int maxVal = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main()
{
    int arr[] = {10, 20, 50, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum element: " << findMax(arr, size) << endl;
    return 0;
}

/*
3. Logarithmic Time: O(log n)
The runtime grows slower than the input size. Algorithms like Binary Search work this way by halving the input at each step.

Example: Binary Search in a sorted array.

cpp
Copy code

 */

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Target not found.
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    int result = binarySearch(arr, size, target);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;
    return 0;
}

/*
4. Quadratic Time: O(n²)
The runtime increases quadratically because the algorithm uses nested loops.

Example: Print all pairs in an array (2 loops).
 */

#include <iostream>
using namespace std;

void printPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    printPairs(arr, size);
    return 0;
}
/*
Summary for Beginners
O(1): Constant - Example: Accessing an array element.
O(n): Linear - Example: Finding the maximum element.
O(log n): Logarithmic - Example: Binary Search.
O(n²): Quadratic - Example: Nested loops for printing all pairs.
These examples are simple and should help you understand how the size of the input affects the time an algorithm takes to run. Always aim for algorithms with lower time complexity for better performance!
 */