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
    bool hasCycle(ListNode* head) {
        if(head == NULL) return false;
        ListNode* t = head;
        ListNode* h = head;

        while(h != NULL && h->next != NULL){
            t= t->next;
            h= h->next->next;
            if(t == h) return true;
        }
        return false;
    }

};
