// Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    // Your code here
    Node *temp = head;
    for (int i = 0; i < n; i++)
    {
        if (temp == NULL)
        {
            return -1;
        }
        temp = temp->next;
    }
    Node *ptr = head;
    while (temp != NULL)
    {
        temp = temp->next;
        ptr = ptr->next;
    }
    return ptr->data;
}