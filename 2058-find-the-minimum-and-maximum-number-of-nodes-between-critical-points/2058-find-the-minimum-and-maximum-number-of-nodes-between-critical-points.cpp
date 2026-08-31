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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* post=nullptr;
        int min_dist=INT_MAX;
        int max_dist=INT_MIN;
        int idx=1;
        int f=-1;
        int p=-1;
        while(head->next){
            post=head->next;
            if(prev!=nullptr&&post!=nullptr&&
                    (
                        (prev->val>head->val&&post->val>head->val)||(prev->val<head->val&&post->val<head->val)
                        )){
                if(f==-1){
                    f=idx;
                }
                else{
                    max_dist=idx-f;
                }
                if(p==-1){
                    p=idx;
                }
                else{
                    min_dist=min(min_dist,idx-p);
                    p=idx;
                }
            }
            idx++;
            prev=head;
            head=head->next;
        }
        if(max_dist==INT_MIN&&min_dist==INT_MAX) return {-1,-1};
        return {min_dist,max_dist};
    }
};