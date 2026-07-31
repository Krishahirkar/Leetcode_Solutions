1class Solution {
2public:
3    int minimumPushes(string word) {
4        if(word.length()<=8){
5            return word.length();
6        }
7        //more frequency wil be assigned fiirst since it should require only one
8       vector<int>mp(26,0);
9       int result = 0; 
10       for(char c:word){
11        mp[c-'a']++;
12       }
13       sort(mp.begin(),mp.end(),greater<int>());
14       for(int i=0;i<26;i++){
15           int freq = mp[i];
16           int press = (i/8)+1;
17           result+=(press*freq); 
18       }
19       return result;
20    }
21};