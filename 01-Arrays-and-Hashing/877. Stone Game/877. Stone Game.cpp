1class Solution {
2public:
3    vector<vector<int>> dp;
4
5    int solve(int i, int j, vector<int>& piles) {
6       
7        if (i > j)
8            return 0;
9        if (i == j)
10            return piles[i];
11
12        if (dp[i][j] != -1)
13            return dp[i][j];
14
15        int start =
16            piles[i] + min(solve(i + 2, j, piles), solve(i + 1, j - 1, piles));
17
18        int end =
19            piles[j] + min(solve(i + 1, j - 1, piles), solve(i, j - 2, piles));
20
21        return dp[i][j] = max(start, end);
22    }
23    bool stoneGame(vector<int>& piles) {
24        int sum = 0;
25        int n = piles.size();
26        dp.assign(n, vector<int>(n, -1));
27
28        int alice = solve(0, n - 1, piles);
29        for (int i = 0; i < n; i++) {
30            sum += piles[i];
31        }
32        int bob = sum - alice;
33        if (bob > alice) {
34            return false;
35        } 
36        else {
37            return true;
38        }
39    }
40};