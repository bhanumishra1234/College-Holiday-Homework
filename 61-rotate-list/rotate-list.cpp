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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        k = k % n;
        ListNode* newhead = head;
        while(k > 0){
            ListNode* curr = newhead;
            while(curr->next != NULL) curr = curr->next;
            ListNode* prev = newhead;
            while(prev->next != curr) prev = prev->next;
            curr->next = newhead;
            prev->next = NULL;
            newhead = curr;
            k--;
        }
        return newhead;
    }
};