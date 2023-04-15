// next and arbit pointer

Node *copyRandomList(Node *head)
{
    Node *old = head;
    while (old != NULL)
    {
        Node *temp = old->next;
        old->next = new Node(old->val);
        old->next->next = temp;
        old = temp;
    }
    old = head;
    while (old != NULL && old->next != NULL)
    {
        if (old->random != NULL)
        {
            old->next->random = old->random->next;
        }
        old = old->next->next;
    }
    Node *res = NULL;
    Node *res_head = res;
    if (head != NULL)
    {
        res = head->next;
        res_head = res;
    }
    while (head != NULL && head->next != NULL && res != NULL && res->next != NULL)
    {
        head->next = head->next->next;
        res->next = res->next->next;
        res = res->next;
        head = head->next;
    }
    if (head != NULL)
    {
        head->next = NULL;
    }
    return res_head;
}