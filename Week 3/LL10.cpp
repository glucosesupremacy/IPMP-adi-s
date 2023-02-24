struct Node *makeUnion(struct Node *head1, struct Node *head2)
{
    // code here
    set<int> store;
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL)
    {
        store.insert(temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        store.insert(temp2->data);
        temp2 = temp2->next;
    }
    Node *head = NULL;
    Node *newtemp = head;
    for (auto it : store)
    {
        struct Node *temp = new Node(it);
        if (head == NULL)
        {
            head = temp;
            newtemp = head;
        }
        else
        {
            newtemp->next = temp;
            newtemp = newtemp->next;
        }
    }
    return head;
}