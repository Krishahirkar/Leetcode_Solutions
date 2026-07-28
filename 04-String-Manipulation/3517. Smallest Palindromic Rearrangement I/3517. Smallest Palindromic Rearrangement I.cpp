1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        string right = ;
5        string left =;
6        if(s.size()==1){
7            return s;
8        }
9        
10        int mid  = s.size()/2;
11        sort(begin(s),begin(s)+mid);
12
13        for(int i=0;i<mid;i++){
14            
15            right+=s[i];
16        }
17        for(int i=right.size()-1;i>=0;i--){
18            left+=right[i];
19        }
20        
21        string res = right;
22        if(s.size()%2!=0){
23            res+=s[mid];
24        }
25        res+=left;
26        return res;
27    }
28};