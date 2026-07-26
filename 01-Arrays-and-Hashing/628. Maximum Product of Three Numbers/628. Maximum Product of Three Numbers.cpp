1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        int maxi = INT_MIN;
5        sort(nums.begin(),nums.end());
6        int n = nums.size();
7        maxi = max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
8        return maxi;
9        
10    }
11};