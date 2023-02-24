Node *divide(int n, Node *head)
{
    // code here
    Node *vowel = NULL;
    Node *cons = NULL;
    Node *vhead = NULL;
    Node *chead = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        int k = temp->data;
        if (k % 2 == 0)
        {
            if (vowel == NULL)
            {
                vowel = temp;
                vhead = temp;
                temp = temp->next;
                vowel->next = NULL;
            }
            else
            {
                vowel->next = temp;
                vowel = vowel->next;
                temp = temp->next;
                vowel->next = NULL;
            }
        }
        else
        {
            if (cons == NULL)
            {
                cons = temp;
                chead = temp;
                temp = temp->next;
                cons->next = NULL;
            }
            else
            {
                cons->next = temp;
                cons = cons->next;
                temp = temp->next;
                cons->next = NULL;
            }
        }
    }
    if (vhead != NULL)
    {
        vowel->next = chead;
        return vhead;
    }
    else
    {
        return chead;
    }
}