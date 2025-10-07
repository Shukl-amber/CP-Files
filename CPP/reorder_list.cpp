#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void reorderList(ListNode *head)
    {
        ListNode *mid = head, *fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            mid = mid->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr, *curr = mid->next, *next = nullptr;
        mid->next = nullptr; 

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode *first = head, *second = prev;
        while (second != nullptr)
        {
            ListNode *temp1 = first->next;
            ListNode *temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};