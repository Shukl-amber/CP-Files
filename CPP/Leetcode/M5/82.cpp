class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *slow, *fast;
        slow = fast = head;
        unordered_map<int, int> freq;

        while (fast != NULL)
        {
            freq[fast->val]++;
            fast = fast->next;
        }

        ListNode *dummy = new ListNode(0, head);
        slow = dummy;
        fast = dummy->next;

        while (fast != NULL)
        {
            while (fast != NULL && freq[fast->val] > 1)
                fast = fast->next;
            slow->next = fast;
            if (fast == NULL)
                break;
            slow = slow->next;
            fast = fast->next;
        }

        return dummy->next;
    }
};