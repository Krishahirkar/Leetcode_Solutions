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
14    vector<int> preorderTraversal(TreeNode* root) {
15        vector<int> preorder;
16        stack<TreeNode*>st;
17        if(root==NULL){
18            return preorder;
19        }
20        st.push(root);
21        while(!st.empty()){
22            root = st.top();
23            st.pop();
24            preorder.push_back(root->val);
25            if(root->right!=NULL){
26                st.push(root->right);
27            }
28            if(root->left!=NULL){
29                st.push(root->left);
30            }
31
32        }
33        return preorder;
34    }
35};