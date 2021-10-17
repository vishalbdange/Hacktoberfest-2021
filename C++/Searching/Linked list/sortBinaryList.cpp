/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode d1(-1);
    ListNode d2(-1);

    ListNode* zeros = &d1;
    ListNode* ones = &d2;

    while(A != NULL){
        if(A->val == 0){
            zeros->next = A;
            if(zeros->next == NULL){
                break;
            }
            zeros = zeros->next;
        }else{
            ones->next = A;
            if(ones->next == NULL){
                break;
            }
            ones = ones->next;
        }
        A = A->next;
    }
   
    zeros->next = d2.next;
    if(ones->next){
        ones->next = NULL;
    }

    return d1.next;
    
}
