class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA)
        {
            ListNode* temp=headB;
            while(temp)
            {
                if(headA==temp) return temp;
                temp=temp->next;
            }
            headA=headA->next;
        }
        return nullptr;
    }
};

