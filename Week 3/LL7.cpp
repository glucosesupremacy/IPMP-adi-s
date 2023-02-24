void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *slow = head;
    Node *fast = head;
    int count = 0;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = slow->next;
            while (slow != fast)
            {
                count++;
                slow = slow->next;
            }
            break;
        }
    }
    Node *front = head;
    while (count > 0 && front != NULL)
    {
        front = front->next;
        count--;
    }
    Node *back = head;
    while (front != NULL && back != NULL && front->next != back)
    {
        front = front->next;
        back = back->next;
    }
    if (front != NULL)
    {
        front->next = NULL;
    }
}