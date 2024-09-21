class Solution {
public:
   ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode *res, *curr, *t1 = list1, *t2 = list2;
       if(!t1 || !t2){
           return t1?t1:t2;
       }
       if (t1->val < t2->val) {
           res = t1;
           curr = t1;
           t1 = t1->next;
       } else {
           res = t2;
           curr = t2;
           t2 = t2->next;
       }
       while (t1 && t2) {
           if (t1->val < t2->val) {
               curr->next = t1;
               curr = t1;
               t1 = t1->next;
           } else {
               curr->next = t2;
               curr = t2;
               t2 = t2->next;
           }
       }
       curr->next = t1?t1:t2;
       return res;
   }
};
