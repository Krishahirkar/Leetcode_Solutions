1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int maxi = INT_MIN;
5        for(int i=0;i<nums.size();i++){
6            for(int j=i+1;j<nums.size();j++){
7                maxi = max(maxi,(nums[i]-1)*(nums[j]-1));
8            }
9        }
10        return maxi;
11    }
12};