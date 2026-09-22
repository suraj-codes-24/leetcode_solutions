/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int size=0;
        ListNode * temp=head;
        ListNode *first;
        ListNode* second;
        while(temp){
            temp=temp->next;
            size++;
        }
        int i=0;
        temp=head;
        while(temp){
            i++;
            if(i==k){
                first=temp;
            }
            if(i==size-k+1){
                second=temp;
            }
            temp=temp->next;
        }
        swap(first->val,second->val);
        return head;
    }
};