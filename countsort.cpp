#include <iostream>
using namespace std;
void countsort(int arr[], int n)
{
    int maxx = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
    }

    int count[INT16_MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= maxx; i++)
    {
        count[i] += count[i - 1];
    }
    int temp[n];
    for (int i = n - 1; i >= 0; i--)
    {
        temp[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[] = {1, 4, 5, 2, 3, 6, 5547, 4, 8, 5, 6, 2, 7};
    countsort(arr, 13);
    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}
