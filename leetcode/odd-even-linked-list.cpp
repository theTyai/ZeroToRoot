        ListNode* even = head->next;
        ListNode* evenh = even;   // save even head

        while (even && even->next) {
            odd->next = even->next;   // link odd nodes
            odd = odd->next;

            even->next = odd->next;   // link even nodes
            even = even->next;
        }

        odd->next = evenh;   // attach even list after odd
        return head;
    }
};


