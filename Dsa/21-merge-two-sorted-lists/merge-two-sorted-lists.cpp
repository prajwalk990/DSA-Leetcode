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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL ){ return list2 ;}
    if(list2==NULL){return list1 ;}
    ListNode * first = list1 ;
    ListNode * second = list2 ;
    ListNode * temp = new ListNode(0);
    ListNode * dummy = temp ;
    while(first!=NULL || second!=NULL ){
         if(!first){
            temp->next = second ;
            second = second->next ;
         }
         else if(!second){
            temp->next = first ;
            first = first->next ;
           
         }
         else if(first->val<=second->val){
            temp->next = first ;
            first = first->next ;
         }
         else {
            temp->next = second ;
            second = second->next ;
         }
      temp = temp->next ;
    }
    return dummy->next ;
    }
};