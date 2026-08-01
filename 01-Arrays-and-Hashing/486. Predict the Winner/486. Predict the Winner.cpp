1class Solution {
2public:
3    int solve(int i,int j,vector<int>& nums){
4        if(i>j){
5            return 0;
6        }
7        if(i==j){
8            return nums[i];
9        }
10        int take_i = nums[i]+min(solve(i+2,j,nums),solve(i+1,j-1,nums));
11        int take_j = nums[j]+min(solve(i+1,j-1,nums),solve(i,j-2,nums));
12        return max(take_i,take_j);
13    }
14    bool predictTheWinner(vector<int>& nums) {
15        int n = nums.size();
16        int p1 = solve(0,n-1,nums);
17        int sum = 0;
18        for(int i=0;i<n;i++){
19            sum+=nums[i];
20        }
21        int p2 = sum-p1;
22        if(p2>p1){
23            return false;
24        }
25        else{
26            return true;
27        }
28        
29        
30    }
31};