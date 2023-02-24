struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    // code here
    Node *head1 = reverse(first);
    Node *head2 = reverse(second);
    Node *res = NULL;
    Node *head = res;
    int sum = 0;
    int carry = 0;
    while (head1 != NULL && head2 != NULL)
    {
        int a = head1->data;
        int b = head2->data;
        sum = (a + b + carry) % 10;
        carry = (a + b + carry) / 10;
        if (res == NULL)
        {
            res = new Node(sum);
            head = res;
        }
        else
        {
            Node *temp = new Node(sum);
            res->next = temp;
            res = res->next;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != NULL)
    {
        sum = (head1->data + carry) % 10;
        carry = (head1->data + carry) / 10;
        res->next = new Node(sum);
        res = res->next;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        sum = (head2->data + carry) % 10;
        carry = (head2->data + carry) / 10;
        res->next = new Node(sum);
        res = res->next;
        head2 = head2->next;
    }
    if (carry > 0)
    {
        res->next = new Node(carry);
    }
    return reverse(head);
}