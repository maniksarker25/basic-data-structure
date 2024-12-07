/*
What is Linear Complexity?
It just means:

You go through each item one by one.
If there are 5 items, you do 5 steps.
If there are 10 items, you do 10 steps.

 */
#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {10, 20, 30}; // Array of 3 numbers
    int sum = 0;                   // Start with sum = 0

    // Go through each number
    for (int i = 0; i < 3; i++)
    {
        sum = sum + numbers[i]; // Add each number to sum
    }

    cout << "Total Sum: " << sum << endl; // Show the result
    return 0;
}

/*
How It Works:
We have 3 numbers: {10, 20, 30}.
Start with sum = 0.
Loop:
First, add 10 → sum = 10.
Next, add 20 → sum = 30.
Then, add 30 → sum = 60.
Print the total sum: 60.
Why is This Linear Complexity?
The loop runs once for each number.
If you add more numbers, the loop will take more time, but it always goes one by one.
 */