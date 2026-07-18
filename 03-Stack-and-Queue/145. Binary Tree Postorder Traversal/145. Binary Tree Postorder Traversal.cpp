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
14    vector<int> postorderTraversal(TreeNode* root) {
15        TreeNode*curr = root;
16        vector<int>post;
17        TreeNode*temp = NULL;
18        stack<TreeNode*>st;
19        while(curr!=NULL || !st.empty()){
20            if(curr!=NULL){
21                st.push(curr);
22                curr = curr->left;
23            }
24            else{
25                temp = st.top()->right;
26                if(temp==NULL){
27                    temp = st.top();
28                    st.pop();
29                    post.push_back(temp->val);
30                    while(!st.empty() && temp ==st.top()->right){
31                        temp = st.top();
32                        st.pop();
33                        post.push_back(temp->val);
34                    }
35                }
36                else{
37                    curr = temp;
38                }
39
40            }
41        }
42        return post;
43    }
44};