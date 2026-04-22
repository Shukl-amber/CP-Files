class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *slow = head, *fast = head;
        while (n--)
            fast = fast->next;

        if (fast != NULL)
            while (fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }

        if (fast == nullptr)
            return head->next;

        if (slow->next != NULL)
            slow->next = slow->next->next;

        return head;
    }
};