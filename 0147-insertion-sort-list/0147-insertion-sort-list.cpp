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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* curr=head;
        ListNode* dummy=new ListNode(0);
        while(curr){
            ListNode* temp=curr->next;
            ListNode* start=dummy;
            while(start->next&&start->next->val<curr->val){
                start=start->next;
            }
            curr->next=start->next;
            start->next=curr;
            curr=temp;
        }
        return dummy->next;
    }
};