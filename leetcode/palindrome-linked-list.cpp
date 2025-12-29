        // 3️⃣ Reverse second half
        second = reverse(second);

        // 4️⃣ Compare both halves
        ListNode* first = head;
        while (second) {
            if (first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};


