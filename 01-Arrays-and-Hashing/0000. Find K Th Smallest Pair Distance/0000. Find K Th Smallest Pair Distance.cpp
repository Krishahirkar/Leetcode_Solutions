1class Solution {
2public:
3    int smallestDistancePair(std::vector<int>& numbers, int k) {
4        std::sort(numbers.begin(), numbers.end());
5        int minDistance = 0, maxDistance = numbers.back() - numbers.front();
6        
7        while (minDistance < maxDistance) {
8            int midDistance = minDistance + (maxDistance - minDistance) / 2;
9            if (countPairsWithinDistance(numbers, midDistance) < k) {
10                minDistance = midDistance + 1;
11            } else {
12                maxDistance = midDistance;
13            }
14        }
15        
16        return minDistance;
17    }
18
19private:
20    int countPairsWithinDistance(const std::vector<int>& numbers, int targetDistance) {
21        int count = 0, left = 0;
22        for (int right = 1; right < numbers.size(); ++right) {
23            while (numbers[right] - numbers[left] > targetDistance) {
24                ++left;
25            }
26            count += right - left;
27        }
28        return count;
29    }
30};
31