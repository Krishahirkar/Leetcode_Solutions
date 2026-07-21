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
14    int maxDepth(TreeNode* root) {
15        int count = 0;
16        if(root==NULL){
17            return NULL;
18        }
19        queue<TreeNode*> q;
20        q.push(root);
21        while(!q.empty()){
22            count++;
23            int size = q.size();
24            for(int i=0;i<size;i++){
25                root = q.front();
26                q.pop();
27                if(root->left!=NULL){
28                    q.push(root->left);
29                }
30                if(root->right!=NULL){
31                    q.push(root->right);
32                }
33            }
34        }
35        return count;
36    }
37};