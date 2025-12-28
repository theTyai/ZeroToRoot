class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=nullptr;
        while(head)
        {
            t->next=temp;
            ListNode* t=new ListNode(head->val);
            head=head->next;
        }
        return temp;
    }
            temp=t;
};

