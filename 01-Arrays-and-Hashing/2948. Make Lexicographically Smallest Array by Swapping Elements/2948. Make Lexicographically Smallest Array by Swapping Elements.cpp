1class Solution {
2public:
3    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
4        vector<pair<int,int>> indexed;
5        for(int i=0;i<nums.size();++i){
6            indexed.push_back({nums[i],i});
7        }
8        sort(indexed.begin(),indexed.end());
9        vector<vector<int>> groups = {{indexed[0].second}};
10        for(int i=1;i<nums.size();++i){
11            if(indexed[i].first-indexed[i-1].first<=limit){
12                groups.back().push_back(indexed[i].second);
13            }
14            else{
15                groups.push_back({indexed[i].second});
16            }
17        }
18        for(auto& group:groups){
19            vector<int> sortedvals;
20            for(int i:group){
21                sortedvals.push_back(nums[i]);
22            }
23            sort(sortedvals.begin(),sortedvals.end());
24            sort(group.begin(),group.end());
25            for(int i=0;i<group.size();i++){
26                nums[group[i]] = sortedvals[i];
27            }
28        }
29        return nums;
30    }
31};