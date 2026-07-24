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
14    int mx = 0;
15    int height(TreeNode*root){
16        if(root==NULL){
17            return 0;
18        }
19        int lh = height(root->left);
20        int rh = height(root->right);
21        return 1+max(lh,rh);
22    }
23    
24    int diameterOfBinaryTree(TreeNode* root) {
25        
26        if(root==NULL){
27            return 0;
28        }
29        
30
31        int lh = height(root->left);
32        int rh = height(root->right);
33          mx = max(mx,lh+rh);
34        diameterOfBinaryTree(root->left);
35        diameterOfBinaryTree(root->right);
36        return mx;
37    }
38};