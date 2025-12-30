
        ListNode* curr = head;
        while (head && head->val == val) head = head->next;
        // remove leading nodes
    ListNode* removeElements(ListNode* head, int val) {
public:
class Solution {
 */
        while (curr && curr->next) {
            if (curr->next->val == val) curr->next = curr->next->next;
            else curr = curr->next;
        }
        return head;
    }
};


