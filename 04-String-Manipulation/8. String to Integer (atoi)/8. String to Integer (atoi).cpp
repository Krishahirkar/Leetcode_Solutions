1class Solution {
2public:
3    int myAtoi(string s) {
4        long long result = 0;
5        int sign = 1;
6        int i=0;
7        while(s[i]==' '){
8            i++;
9        }
10        
11        if(s[i]=='+' || s[i]=='-'){
12            if(s[i]=='-'){
13                sign = -1;
14            }
15            i++;
16        }
17        while(s[i]>='0' && s[i]<='9'){
18            result = result*10+(s[i]-'0');
19
20            if (sign == 1 && result > INT_MAX){
21                return INT_MAX;
22             }
23            if(sign==-1 && result>(long long)INT_MAX+1){
24                return INT_MIN;
25            }
26            i++;
27        }
28       
29
30        return result*sign;
31    }
32};