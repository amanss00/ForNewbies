/* the following code demonstrates how to find kth smallest
element using set from C++ STL */

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 4;

	set<int> s(arr, arr + n);
	set<int>::iterator itr
		= s.begin(); // s.begin() returns a pointer to first
					// element in the set
	advance(itr, k - 1); // itr points to kth element in set

	cout << *itr << "\n";

	return 0;
}