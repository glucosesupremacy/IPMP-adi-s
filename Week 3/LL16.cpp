Node *segregate(Node *head)
{

    // Add code here
    Node *head0 = NULL;
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *temp0 = NULL;
    Node *temp1 = NULL;
    Node *temp2 = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            if (head0 == NULL)
            {
                temp0 = temp;
                head0 = temp;
                temp = temp->next;
                head0->next = NULL;
            }
            else
            {
                head0->next = temp;
                temp = temp->next;
                head0 = head0->next;
                head0->next = NULL;
            }
        }
        else if (temp->data == 1)
        {
            if (head1 == NULL)
            {
                temp1 = temp;
                head1 = temp;
                temp = temp->next;
                head1->next = NULL;
            }
            else
            {
                head1->next = temp;
                temp = temp->next;
                head1 = head1->next;
                head1->next = NULL;
            }
        }
        else
        {
            if (head2 == NULL)
            {
                temp2 = temp;
                head2 = temp;
                temp = temp->next;
                head2->next = NULL;
            }
            else
            {
                head2->next = temp;
                temp = temp->next;
                head2 = head2->next;
                head2->next = NULL;
            }
        }
    }
    if (head0 != NULL)
    {
        if (temp1 != NULL)
        {
            head0->next = temp1;
            head1->next = temp2;
            return temp0;
        }
        else
        {
            head0->next = temp2;
            return temp0;
        }
    }
    else if (head1 != NULL)
    {
        head1->next = temp2;
        return temp1;
    }
    else
    {
        return temp2;
    }
}