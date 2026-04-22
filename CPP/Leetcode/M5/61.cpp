class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        int size = 1;
        ListNode *fast = head;
        while (fast->next)
        {
            fast = fast->next;
            size++;
        }

        k %= size;
        if (k == 0)
            return head;

        fast->next = head;

        int k = size - k - 1;
        ListNode *newfast = head;
        while (k--)
            newfast = newfast->next;

        ListNode *newHead = newfast->next;
        newfast->next = NULL;

        return newHead;
    }
};