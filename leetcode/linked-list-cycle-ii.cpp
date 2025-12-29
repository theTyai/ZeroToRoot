        ListNode* slow=head, *fast=head;
        while(slow &&fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                ListNode* temp=head;
                while(temp != slow)
                {
                    temp=temp->next;
                    slow=slow->next;
                }
            }
        }
        return nullptr;
    }
                return temp;

