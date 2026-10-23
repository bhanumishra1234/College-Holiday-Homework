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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        int sum = head1->val + head2->val;
        ListNode* resulthead = new ListNode(sum % 10);
        int carr = sum / 10;
        ListNode* curr1 = head1->next;
        ListNode* curr2 = head2->next;
        ListNode* resultcurr = resulthead;
        while(curr1 != NULL || curr2 != NULL){
            sum = carr;
            if (curr1 != NULL){
                sum += curr1->val;
                curr1 = curr1->next;
            }
            if (curr2 != NULL){
                sum += curr2->val;
                curr2 = curr2->next;
            }
            resultcurr->next = new ListNode(sum % 10);
            resultcurr = resultcurr->next;
            carr = sum/10;
        }
        if(carr != 0) resultcurr->next = new ListNode(carr);
        return resulthead;
    }
};