#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <conio.h>
#include <queue>
#include <utility>
typedef long long ll;
using namespace std;
int main()
{
    getch();
}
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        map<int, int> m;
        int ans = 1000000;
        int close = 1000000;
        int n = nums.size();
        if (n == 3)
        {
            return nums[0] + nums[1] + nums[2];
        }
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int need = target - (nums[i] + nums[j]);
                auto it = m.lower_bound(need);
                if (it == m.end())
                {
                    int ele = prev(m.end())->first;
                    if (abs(need - ele) < close)
                    {
                        if (ele != nums[i] && ele != nums[j])
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele != nums[j] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[j] && ele != nums[i] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele == nums[j] && m[ele] > 2)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                    }
                }
                else if (it == m.begin())
                {
                    int ele = it->first;
                    if (abs(need - ele) < close)
                    {
                        if (ele != nums[i] && ele != nums[j])
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele != nums[j] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[j] && ele != nums[i] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele == nums[j] && m[ele] > 2)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                    }
                }
                else
                {
                    int ele = it->first;
                    if (abs(need - ele) < close)
                    {
                        if (ele != nums[i] && ele != nums[j])
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele != nums[j] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[j] && ele != nums[i] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele == nums[j] && m[ele] > 2)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                    }
                    ele = prev(it)->first;
                    if (abs(need - ele) < close)
                    {
                        if (ele != nums[i] && ele != nums[j])
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele != nums[j] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[j] && ele != nums[i] && m[ele] > 1)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                        else if (ele == nums[i] && ele == nums[j] && m[ele] > 2)
                        {
                            close = abs(need - ele);
                            ans = ele + nums[i] + nums[j];
                        }
                    }
                }
                if (ans == target)
                {
                    break;
                }
            }
            if (ans == target)
                break;
        }
        return ans;
    }
};