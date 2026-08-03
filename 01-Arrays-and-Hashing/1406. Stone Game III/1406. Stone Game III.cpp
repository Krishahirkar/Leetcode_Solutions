1class Solution {
2public:
3    string stoneGameIII(vector<int>& stoneValue) {
4        int n = stoneValue.size();
5
6        vector<int> dp(n + 1, 0);
7
8        for (int i = n - 1; i >= 0; i--) {
9
10            dp[i] = INT_MIN;
11
12            int sum = 0;
13
14            for (int j = i; j < min(n, i + 3); j++) {
15
16                sum += stoneValue[j];
17
18                dp[i] = max(dp[i], sum - dp[j + 1]);
19            }
20        }
21
22        if (dp[0] > 0) return Alice;
23        if (dp[0] < 0) return Bob;
24        return Tie;
25    }
26};