1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        ListNode*tail = head;
15        int len = 1;
16        if(head==NULL || head->next==NULL || k==0){
17            return head;
18        }
19        while(tail->next!=NULL){
20            len++;
21            tail = tail->next;
22        }
23       
24        if(k%len==0){
25            
26            return head;
27        }
28        k = k%len;
29        tail->next = head;
30        ListNode*temp = tail;
31        for(int i=0;i<len-k;i++){
32           temp = temp->next; 
33        }
34        head = temp->next;
35        temp->next = nullptr;
36        return head;
37      
38    }
39};