/** 
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
**/

//LEETCODE SOLUTION 


class Solution {
public:
    int climbStairs(int n) {
         if(n==1 || n==2)
            return n;
        
        vector<int> d(n+1);
        d[0]=0;
        d[1]=1;
        d[2]=2;
        
        for(int i=3;i<=n;i++) 
        {
            d[i]=d[i-1]+d[i-2];
        }
        
        return d[n];
    }
};


