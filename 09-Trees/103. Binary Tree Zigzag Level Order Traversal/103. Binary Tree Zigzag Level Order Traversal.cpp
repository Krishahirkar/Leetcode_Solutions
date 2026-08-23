1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
16        vector<vector<int>> result;
17        if (root == NULL) {
18            return result;
19        }
20
21        queue<TreeNode*> nodesQueue;
22        nodesQueue.push(root);
23        bool lefttoright = true;
24        while (!nodesQueue.empty()) {
25            int size = nodesQueue.size();
26            vector<int> row(size);
27            for (int i = 0; i < size; i++) {
28                TreeNode* node = nodesQueue.front();
29                nodesQueue.pop();
30                int index;
31                if (lefttoright) {
32                    index = i;
33                } else {
34                    index = size - 1 - i;
35                }
36
37                row[index] = node->val;
38                if (node->left) {
39                    nodesQueue.push(node->left);
40                }
41                if (node->right) {
42                    nodesQueue.push(node->right);
43                }
44            }
45            lefttoright = !lefttoright;
46            result.push_back(row);
47        }
48        return result;
49    }
50};