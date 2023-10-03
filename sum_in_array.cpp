// Program to display the sum and product of the element in the array using C++

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n); // vextor is use to store the element that the user input

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) { // loop to run for rach element in the loop
        cin >> arr[i];
    }

    // Initialize variables

    int sum = 0;
    int product = 1; 
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    // displaying the result in the console output

    cout << "The sum of elements in the array is: " << sum << endl;
    cout << "The product of elements in the array is: " << product << endl;

    return 0;
}