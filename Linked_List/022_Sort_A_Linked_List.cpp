/*
https://leetcode.com/problems/sort-list/
*/

// Time should O(nlogn),  which is merge sort.


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
    ListNode * mergeTwoSortedLL(ListNode * head1, ListNode * head2){

      if(head1==NULL || head2==NULL){
        if(head1==NULL){
          return head2;
        }
        if(head2==NULL){
          return head1;
        }
      }

      ListNode * mergeHead = NULL;
      if(head1->val < head2->val){
        mergeHead = head1;
        head1 = head1->next;
      }else{
        mergeHead = head2;
        head2 = head2->next;
      }

      ListNode * tail = mergeHead;
      while(head1 && head2){
        if(head1->val < head2->val){
          tail->next = head1;
          head1 = head1->next;
          //tail = head1;
        }else{
          tail->next = head2;
          head2 = head2->next;
          //tail = head2;
        }
        tail = tail->next;
      }
      if(head1){
        tail->next = head1;
      }else{
        tail->next = head2;
      }

      return mergeHead;
    }
    
    
    
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return head;
        ListNode * slow = head;
        ListNode * fast = head->next;
        ListNode * copyHead = head; // copying head just for safe
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *n = slow->next; // slow->next to NULL second half
        slow->next = NULL; // head to slow is first half
        ListNode * firstHalfLL = sortList(copyHead); // First Half
        ListNode * secondHalfLL = sortList(n); // Second half
        // we have to merge both the list
        ListNode * finalHead = mergeTwoSortedLL(firstHalfLL, secondHalfLL);
        return finalHead;
    }
};
