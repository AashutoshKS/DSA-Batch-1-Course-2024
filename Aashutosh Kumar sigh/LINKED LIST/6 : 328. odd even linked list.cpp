class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd=head;
        ListNode *evenhead=head->next;
        ListNode *even=evenhead;
        while(even !=nullptr && odd != nullptr){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=odd->next;
        }
        odd->next=evenhead;
        return head;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)
