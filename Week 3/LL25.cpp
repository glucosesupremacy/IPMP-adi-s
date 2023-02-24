void linkdelete(struct Node *head, int m, int n)
{
    if (head == NULL)
    {
        return;
    }
    struct Node *temp = head;
    int skip = 0;
    int del = 0;
    while (temp != NULL && skip < m - 1)
    {
        temp = temp->next;
        skip++;
    }
    Node *skipper = temp;
    while (skipper != NULL && del <= n)
    {
        skipper = skipper->next;
        del++;
    }
    if (temp != NULL)
    {
        temp->next = skipper;
    }
    linkdelete(skipper, m, n);
}