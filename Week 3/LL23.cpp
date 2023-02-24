class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *temp = head->next->next;
        ListNode *temp2 = head->next;
        head->next->next = head;
        head->next = swapPairs(temp);
        return temp2;
    }
};