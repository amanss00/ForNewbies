#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{

    int m = nums[0];
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        if (count == 0)
        {
            m = nums[i], count = 1;
        }
        else
        {
            if (m == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }
    return m;
}

int main()
{
    int n;

    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << majorityElement(nums) << endl;

    return 0;
}