 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prev=nullptr, *slow=head, *fast=head;
        while(fast&&fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;
    }
        if(head==nullptr||head->next==nullptr) return nullptr;
};

