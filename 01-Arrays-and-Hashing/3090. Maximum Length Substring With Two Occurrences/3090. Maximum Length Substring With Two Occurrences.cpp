1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4       int ans = INT_MIN;
5       int right = 0;
6       int left = 0;
7       unordered_map<char,int> mpp;
8       while(right<s.length()){
9            mpp[s[right]]++;
10            while(mpp[s[right]]>2  && left<=right){
11                mpp[s[left]]--;
12                left++;
13
14            }
15            ans = max(ans,right-left+1);
16            right++;
17       }
18       return ans;
19    }
20};