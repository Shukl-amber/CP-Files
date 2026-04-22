class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (head == nullptr || left == right)
            return head;

        ListNode dummy(0, head);
        ListNode *prev = &dummy;

        // Move prev to the node just before the reversal starts.
        for (int i = 1; i < left; i++)
            prev = prev->next;

        ListNode *curr = prev->next;

        // Reverse sublist [left, right] by repeatedly moving next node after prev.
        for (int i = 0; i < right - left; i++)
        {
            ListNode *move = curr->next;
            curr->next = move->next;
            move->next = prev->next;
            prev->next = move;
        }

        return dummy.next;
    }
};