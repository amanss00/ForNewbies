#include <bits/stdc++.h>
using namespace std;

int findSingle(int arr[], int n)
{
    // Do XOR of all elements and return
    // Xor of duplicates yields 0
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = res ^ arr[i];

    return res;
}

int main()
{
    int n;
    cout << "Enter the size of array  ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Element occurring once is " << findSingle(arr, n);
    return 0;
}