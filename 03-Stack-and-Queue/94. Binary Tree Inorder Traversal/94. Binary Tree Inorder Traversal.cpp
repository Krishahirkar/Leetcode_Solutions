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
14    vector<int> inorderTraversal(TreeNode* root) {
15        stack<TreeNode*>st;
16        vector<int>inorder;
17        TreeNode*node = root;
18        while(true){
19            if(node!=NULL){
20                st.push(node);
21                node = node->left;
22            }
23            else{
24                if(st.empty()==true){
25                    break;
26                }
27                node = st.top();
28                st.pop();
29                inorder.push_back(node->val);
30                node = node->right;
31            }
32        }
33        return inorder;
34    }
35};