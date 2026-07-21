1class Solution {
2public:
3    int maxActiveSectionsAfterTrade(string s) {
4        int n = s.length();
5        int zerocnt = 0;
6        int onecnt = 0;
7        int ans =0;
8        vector<int>inactiveblocks;
9        for(int i=0;i<n;i++){
10            if(s[i]=='0'){
11                zerocnt++;
12            }
13            else{
14                onecnt++;
15            
16            if(zerocnt>0){
17                inactiveblocks.push_back(zerocnt);
18                zerocnt = 0;
19                }
20            }
21        }
22        if(zerocnt>0){
23            inactiveblocks.push_back(zerocnt);
24        }
25        int z = inactiveblocks.size();
26        int mx = 0;
27        int sum = 0;
28        for(int i=0;i<z-1;i++){
29        
30            mx = max(mx,inactiveblocks[i]+inactiveblocks[i+1]);
31        }
32        
33        ans = mx+onecnt;
34        return ans;
35    }
36};