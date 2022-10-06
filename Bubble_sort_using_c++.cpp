#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the size of array  ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array of elements   " << i << " :-  ";
        cin >> array[i];
    }

    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<"  ";
    }

    return 0;
}
