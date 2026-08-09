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
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        ListNode* currNode = head;
        int c = 1;

        // for(int i = left;i<=right;i++){
        //     ListNode* nextNode = currNode->next;
        //     currNode->next = prevNode;
        //     prevNode = currNode;
        //     currNode = nextNode;
        // }

        while(left<=right){
            if(c < left) {
                c++;
                continue;
            }
            ListNode* nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
            left++;
        }

        temp->next = currNode;
        return prevNode;
    }
};