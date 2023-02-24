bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *pre = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        pre = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    // start reversing from slow;
    if (pre != NULL)
    {
        pre->next = NULL;
    }

    ListNode *prev = NULL;
    ListNode *next = NULL;
    ListNode *current = slow;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    // prev is now head of reversed LL
    while (prev != NULL && head != NULL)
    {
        if (prev->val != head->val)
        {
            return false;
        }
        prev = prev->next;
        head = head->next;
    }
    return true;
}