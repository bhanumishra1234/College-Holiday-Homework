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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* last = head;
        while(last->next != NULL) last = last->next;
        ListNode* newhead = last;
        while(last != head){
            ListNode* prev = head;
            while(prev->next != last) prev = prev->next;
            last->next = prev;
            last = prev;
        }
        head->next = NULL;
        return newhead;
    }
};