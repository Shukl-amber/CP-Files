class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *slow, *fast;
        slow = fast = head;

        if (fast->next)
            fast = fast->next;

        while (fast->next != NULL && fast->next->next != NULL)
        {
            swap(slow->val, fast->val);
            fast = fast->next->next;
            slow = slow->next->next;
        }

        return head;
    }
};