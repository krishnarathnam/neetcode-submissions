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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prevNode = &dummy;
        ListNode* currNode = head;

        
        for(int i= 1;i<left;i++){
            prevNode=currNode;
            currNode = currNode->next;
        }

        ListNode* prev = NULL;
        ListNode* sectionHead = currNode;

        for(int i = left;i<=right;i++){
            ListNode* nextNode = currNode->next;
            currNode->next = prev;
            prev = currNode;
            currNode = nextNode;
        }
        prevNode->next = prev;
        sectionHead->next = currNode;


        return dummy.next;
    }
};