1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        vector<int> result;
6        int j=0;
7        int min_num = nums[0];
8        int max_num = nums[nums.size()-1];
9        for(int i=min_num;i<max_num;i++){
10            if(j<nums.size() && i==nums[j]){
11                j++;
12            }
13            else{
14                result.push_back(i);
15            }
16        }
17        sort(result.begin(),result.end());
18        return result;
19    }
20};