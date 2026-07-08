1class Solution {
2public:
3    int romanToInt(string s) {
4        int result = 0;
5
6        for (int i = 0; i < s.size(); i++) {
7
8            
9            if (i + 1 < s.size()) {
10                if (s[i] == 'I' && s[i + 1] == 'V') {
11                    result += 4;
12                    i++;
13                    continue;
14                }
15                if (s[i] == 'I' && s[i + 1] == 'X') {
16                    result += 9;
17                    i++;
18                    continue;
19                }
20                if (s[i] == 'X' && s[i + 1] == 'L') {
21                    result += 40;
22                    i++;
23                    continue;
24                }
25                if (s[i] == 'X' && s[i + 1] == 'C') {
26                    result += 90;
27                    i++;
28                    continue;
29                }
30                if (s[i] == 'C' && s[i + 1] == 'D') {
31                    result += 400;
32                    i++;
33                    continue;
34                }
35                if (s[i] == 'C' && s[i + 1] == 'M') {
36                    result += 900;
37                    i++;
38                    continue;
39                }
40            }
41
42            
43            if (s[i] == 'I') result += 1;
44            if (s[i] == 'V') result += 5;
45            if (s[i] == 'X') result += 10;
46            if (s[i] == 'L') result += 50;
47            if (s[i] == 'C') result += 100;
48            if (s[i] == 'D') result += 500;
49            if (s[i] == 'M') result += 1000;
50        }
51
52        return result;
53    }
54};