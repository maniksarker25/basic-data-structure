/*


Imagine Guessing a Number Game
You have to guess a secret number between 1 and 100. Instead of guessing each number one by one, you can make it faster by asking:

"Is the number greater than, less than, or equal to 50?"

Each time, you cut the range in half based on the answer. This is an example of logarithmic complexity!
 */

#include <iostream>
using namespace std;

int main()
{
    int low = 1;     // Starting range
    int high = 100;  // Ending range
    int target = 73; // The secret number to guess

    while (low <= high)
    {
        int mid = (low + high) / 2; // Guess the middle number
        cout << "Is your number " << mid << "? (yes, higher, lower): ";

        string response;
        if (mid == target)
        { // If the guessed number is correct
            cout << "Correct! The number is " << mid << "." << endl;
            break;
        }
        else if (mid < target)
        { // If the number is higher
            cout << "higher" << endl;
            low = mid + 1; // Move the lower bound up
        }
        else
        { // If the number is lower
            cout << "lower" << endl;
            high = mid - 1; // Move the upper bound down
        }
    }

    return 0;
}

/*
How This Works:
Initial Range: The program starts guessing in the range 1 to 100.
Middle Number: Each time, it guesses the middle number of the range.
Adjust Range:
If the target number is higher, the program ignores the lower half.
If the target number is lower, it ignores the upper half.
Repeat: It keeps cutting the range in half until it finds the correct number.

 */

/*
Example Walkthrough:
Let’s say the target number is 73. Here’s how the guesses work:

Guess 50 → "Higher" → New range is 51 to 100.
Guess 75 → "Lower" → New range is 51 to 74.
Guess 62 → "Higher" → New range is 63 to 74.
Guess 68 → "Higher" → New range is 69 to 74.
Guess 71 → "Higher" → New range is 72 to 74.
Guess 73 → "Correct!" → Done.
 */

/*
Why Is This Logarithmic Complexity?
Each guess cuts the range in half:

For 100 numbers, it takes at most 7 steps (log₂(100) ≈ 7).
For 1,000 numbers, it takes at most 10 steps (log₂(1,000) ≈ 10).
This is much faster than guessing every number one by one!
 */