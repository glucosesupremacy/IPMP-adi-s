Node *divide(int n, Node *head)
{
    // code here
    Node *even = NULL;
    Node *odd = NULL;
    Node *ehead = NULL;
    Node *ohead = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        int k = temp->data;
        if (k % 2 == 0)
        {
            if (even == NULL)
            {
                even = temp;
                ehead = temp;
                temp = temp->next;
                even->next = NULL;
            }
            else
            {
                even->next = temp;
                even = even->next;
                temp = temp->next;
                even->next = NULL;
            }
        }
        else
        {
            if (odd == NULL)
            {
                odd = temp;
                ohead = temp;
                temp = temp->next;
                odd->next = NULL;
            }
            else
            {
                odd->next = temp;
                odd = odd->next;
                temp = temp->next;
                odd->next = NULL;
            }
        }
    }
    if (ehead != NULL)
    {
        even->next = ohead;
        return ehead;
    }
    else
    {
        return ohead;
    }
}