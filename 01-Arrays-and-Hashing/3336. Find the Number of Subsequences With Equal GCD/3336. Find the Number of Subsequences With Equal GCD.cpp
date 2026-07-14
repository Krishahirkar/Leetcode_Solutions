1class Solution {
2    static constexpr int MOD = 1e9 + 7;
3
4public:
5    int subsequencePairCount(vector<int>& nums) {
6        int m = *max_element(nums.begin(), nums.end());
7        int n = nums.size();
8
9        vector<vector<int>> dp(m + 1, vector<int>(m + 1));
10        dp[0][0] = 1;
11
12        for (int num : nums) {
13            vector<vector<int>> ndp(m + 1, vector<int>(m + 1));
14            for (int j = 0; j <= m; j++) {
15                int divisor1 = gcd(j, num);
16                for (int k = 0; k <= m; k++) {
17                    int val = dp[j][k];
18                    if (val == 0) {
19                        continue;
20                    }
21                    int divisor2 = gcd(k, num);
22                    ndp[j][k] = (ndp[j][k] + val) % MOD;
23                    ndp[divisor1][k] = (ndp[divisor1][k] + val) % MOD;
24                    ndp[j][divisor2] = (ndp[j][divisor2] + val) % MOD;
25                }
26            }
27            dp.swap(ndp);
28        }
29
30        int ans = 0;
31        for (int j = 1; j <= m; j++) {
32            ans = (ans + dp[j][j]) % MOD;
33        }
34
35        return ans;
36    }
37};