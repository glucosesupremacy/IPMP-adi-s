ListNode *rotateRight(ListNode *head, int k)
{
    int n = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    if (n > 0)
    {
        k = k % n;
    }
    int n1 = n - k;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    ListNode *current = head;
    int c = 0;
    while (c < n1 && current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        c++;
    }
    ListNode *newhead = prev;
    prev = NULL;
    next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    if (head != NULL)
    {
        head->next = prev;
    }
    current = newhead;
    prev = NULL;
    next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}