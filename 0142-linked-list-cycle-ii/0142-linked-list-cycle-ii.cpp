/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head ;
        ListNode* fast = head ;
        ListNode* temp = nullptr ; 

        while( fast!= nullptr && fast->next != nullptr){
            slow =slow -> next ;
            fast = fast ->next ->next ;

            if (slow == fast ){
                temp = slow ;
                break ;
            }
        }

       if( temp == nullptr){
           return nullptr ;
       }

        while( head != temp){
            temp = temp->next ;
            head = head->next ;
        }

        return head;
    }
};