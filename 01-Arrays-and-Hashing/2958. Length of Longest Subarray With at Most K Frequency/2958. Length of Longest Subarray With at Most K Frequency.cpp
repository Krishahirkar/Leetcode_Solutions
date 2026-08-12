1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        int ans = INT_MIN;
5        int left = 0;
6        int right = 0;
7        unordered_map<int,int>mpp;
8        while(right<nums.size()){
9            mpp[nums[right]]++;
10            while(mpp[nums[right]]>k && left<=right){
11                mpp[nums[left]]--;
12                left++;
13            }
14            ans = max(ans,right-left+1);
15            right++;
16        }
17        return ans;
18    }
19};