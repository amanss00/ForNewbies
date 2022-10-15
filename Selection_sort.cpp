#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "define array size=   ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements you want to add   " << i << " :-  ";
        cin >> array[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }

    return 0;
}
