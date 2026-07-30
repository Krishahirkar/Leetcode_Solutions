1class Solution {
2public:
3    int minimumPushes(string word) {
4        if(word.length()<=8){
5            return word.length();
6        }
7        int result = 0;
8        map<int,int>mpp;
9        
10            int assign_key = 2;
11            for(char c:word){
12                if(assign_key>9){
13                    assign_key = 2;
14                }
15                
16                    mpp[assign_key]++;
17                    result+=mpp[assign_key];
18                    assign_key++;
19                
20            }
21        
22        return result;
23    }
24};