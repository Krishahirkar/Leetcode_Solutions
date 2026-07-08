1class Solution {
2public:
3    int maxDepth(string s) {
4        int count = 0;
5        int max_count = 0;
6        for(int i=0;i<s.size();i++){
7            if(s[i]=='('){
8                count++;
9                max_count = max(max_count,count);
10            }
11            if(s[i]==')'){
12                count--;
13            }
14            continue;
15          
16
17        }
18        return max_count;
19    }
20};