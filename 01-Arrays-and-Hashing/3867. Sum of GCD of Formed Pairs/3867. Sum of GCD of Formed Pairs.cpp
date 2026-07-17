1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4        int n = nums.size();
5        int mx = -1;
6
7        vector<int> prefixgcd;
8        //prefixgcd[0] = nums[0];
9
10        for (int i = 0; i < n; i++) {
11            mx = max(mx,nums[i]);
12            prefixgcd.push_back(__gcd(mx,nums[i]));
13        }
14
15        sort(prefixgcd.begin(), prefixgcd.end());
16
17        long long result = 0;
18
19        for (int i = 0; i < n / 2; i++) {
20            result += __gcd(prefixgcd[i], prefixgcd[n - 1 - i]);
21        }
22
23        return result;
24    }
25};