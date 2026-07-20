1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>> ans;
16        if(root==NULL){
17            return ans;
18
19        }
20        queue<TreeNode*> q;
21        q.push(root);
22        while(!q.empty()){
23            int size = q.size();
24            vector<int>level;
25            for(int i=0;i<size;i++){
26            TreeNode*node = q.front();
27            q.pop();
28            
29            if(node->left!=NULL){
30                q.push(node->left);
31            }
32            if(node->right!=NULL){
33                q.push(node->right);
34            }
35            level.push_back(node->val);
36            }
37            ans.push_back(level);
38
39        }
40        return ans;
41    }
42};