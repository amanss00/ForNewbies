#include <iostream>
using namespace std;
void dnfsort(int arr[], int n)
{
  int low = 0;
  int mid = 0;
  int high = n - 1;
  while (mid <= high)
  {
    if (arr[mid] == 0)
    {
      swap(arr[low], arr[mid]);
      mid++;
      low++;
    }
    else if (arr[mid] == 1)
    {
      mid++;
    }

    else
    {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

int main()
{
  int arr[] = {0, 1, 2, 1, 0, 0, 2, 0, 1, 1, 1, 1, 0};
  dnfsort(arr, 13);
  for (int i = 0; i < 13; i++)
  {
    cout << arr[i] << ",";
  }
  cout << endl;

  return 0;
}
