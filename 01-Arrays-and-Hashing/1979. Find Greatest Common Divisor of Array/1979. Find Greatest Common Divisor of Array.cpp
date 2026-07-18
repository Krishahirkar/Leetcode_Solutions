1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int mini = INT_MAX;
5        int mx = INT_MIN;
6        for(int i=0;i<nums.size();i++){
7            mini = min(mini,nums[i]);
8            mx = max(mx,nums[i]);
9        }
10        int res = __gcd(mini,mx);
11        return res;
12    }
13};