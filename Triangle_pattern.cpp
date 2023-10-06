// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void tri(int n)
{
    // Number of spaces
    int i, j, k = n;
    // Outer loop to handle number of rows

    // n in this case

    for (i = 1; i <= n; i++) {
        // Inner loop for columns

        for (j = 1; j <= n; j++) {
            // Condition to print star pattern

            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
}
// Driver Code

int main()
{
    int n = 5;
    // Function Call
    tri(n);
    return 0;
}
