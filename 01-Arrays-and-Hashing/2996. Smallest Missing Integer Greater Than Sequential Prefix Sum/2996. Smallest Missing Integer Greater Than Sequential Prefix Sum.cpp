1class Solution {
2public:
3    int missingInteger(std::vector<int>& nums) {
4        int n = nums.size();
5        std::unordered_set<int> num_set(nums.begin(), nums.end());
6        int total = nums[0];
7
8        for (int i = 1; i < n; i++) {
9            if (nums[i] == nums[i - 1] + 1) {
10                total += nums[i];
11            } else {
12                break;
13            }
14        }
15
16        while (num_set.count(total)) {
17            total += 1;
18        }
19
20        return total;
21    }
22};