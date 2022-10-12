#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int trappingWater(int arr[], int n)
{
        int left[n]  ;
       int right[n] ;
    left[0] = arr[0];
    
    for (int i = 1; i < n; i++)
    {
      left[i] = max(left[i-1],arr[i]);
    } 
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i++)
    {
        right[i] = max(right[i+1],arr[i]);
    }
    int water_contain = 0;
    for (int i = 0; i < n; i++)
    {
        water_contain += min(left[i], right[i]) - arr[i]; 
    }
    return water_contain;
    }
int main()
{
    int n = 6;
    int arr[] = {3, 0, 0, 2, 0, 4};

    cout << trappingWater(arr,n);
    return 0;
}