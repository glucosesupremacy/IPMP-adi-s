ListNode *Solution::solve(ListNode *head, int k)
{
    int c = 0;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    ListNode *current = head;
    while (current != NULL && c < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        c++;
    }
    // head should now be pointing to NULL
    if (head != NULL)
    {
        head->next = current; // make the end of the reversed LL point to the next unprocessed node
    }
    c = 0;
    while (c < k - 1 && current != NULL)
    { // k-1 because we are already at one node ahead of the reversed nodes
        current = current->next;
        c++;
    }
    if (current != NULL)
    {
        current->next = solve(current->next, k); // recurse
    }
    return prev; // head of the 2k processed nodes is still prev
}
