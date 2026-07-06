1class Solution {
2public:
3    int removeCoveredIntervals(vector<vector<int>>& intervals) {
4        vector<vector<int>> result;
5        auto lambda = [](vector<int>vec1,vector<int>vec2){
6            if(vec1[0]==vec2[0]){
7                return vec1[1]>vec2[1];
8            }
9            return vec2[0]>vec1[0];
10        };
11        sort(begin(intervals),end(intervals),lambda);
12        result.push_back(intervals[0]);
13        for(int i =1;i<intervals.size();i++){
14            if(result.back()[0]<=intervals[i][0] && result.back()[1]>=intervals[i][1]){
15                continue;
16            }
17            result.push_back(intervals[i]);
18        }
19        return result.size();
20    }
21};