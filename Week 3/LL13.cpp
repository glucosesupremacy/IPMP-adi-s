ListNode *reverseKGroup(ListNode *head, int k)
{
    int c = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
        if (c >= k)
        {
            break;
        }
    }
    if (c < k)
    {
        return head;
    }
    ListNode *prev = NULL;
    ListNode *next = NULL;
    ListNode *current = head;
    ListNode *start = head;
    while (c > 0)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        c--;
    }
    start->next = reverseKGroup(current, k);
    return prev;
}