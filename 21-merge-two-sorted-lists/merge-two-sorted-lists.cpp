class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* head = NULL;
        if(a->val <= b->val){
            head = a;
            a = a->next;
        }
        else{
            head = b;
            b = b->next;
        }
        ListNode* curr = head;
        while(a != NULL && b != NULL){
            if(b->val <= a->val){
                curr->next = b;
                b = b->next;
            }
            else{
                curr->next = a;
                a = a->next;
            }
            curr = curr->next;
        }
        if(a != NULL) curr->next = a;
        else curr->next = b;
        return head;
    }
};