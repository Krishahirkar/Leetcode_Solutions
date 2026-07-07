1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        int sum=0;
5        
6        string res= ;
7        string s = to_string(n);
8        for(int i=0;i<s.size();i++){
9            if(s[i]=='0'){
10                continue;
11            }
12            res=res+s[i];
13            sum= sum+(s[i]-'0');
14        }
15       long long ans = 1LL*sum*atoi(res.c_str());
16        return ans;
17    }
18};