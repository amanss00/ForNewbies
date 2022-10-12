// Question link : https://leetcode.com/problems/rotate-array/


//your code goes here

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1 || k==0 || k%nums.size()==0)
            return;
        k=k%nums.size();
        int i=0;
        int j=nums.size()-1;
        while(i<=j) {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i=0;
        j=k-1;
        while(i<=j) {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i=k;
        j=nums.size()-1;
        while(i<=j) {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};
