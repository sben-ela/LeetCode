#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

    int lstSize(ListNode* head)
    {
        int size = 0;
        while (head)
        {
            head = head->next;
            size++;
        }
        return (size);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = lstSize(head);
        ListNode *tmp = head;
        int i = 1;
        while (i < size - n)
        {
            head = head->next;
            i++;
        }
        if (size == 2)
            return (tmp->next);
        if (size == 1)
            return (0);
        else if (head->next)
            head->next = head->next->next;

        return (tmp);
    }

int main()
{
    ListNode *head;

    head->next = new ListNode(1);
    head->next->next = new ListNode(2);

    head = removeNthFromEnd(head, 2);
    while (head)
    {
        std::cout << head->val << std::endl;
        head = head->next;
    }
}