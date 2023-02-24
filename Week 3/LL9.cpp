ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *temp1 = headA;
    ListNode *temp2 = headB;
    int mark1 = 0;
    int mark2 = 0;
    while (mark1 == 0 || mark2 == 0)
    {
        if (temp1->next == NULL)
        {
            temp1 = headB;
            if (temp1->next == NULL)
            {
                temp2 = headA;
                mark2 = 1;
            }
            mark1 = 1;
            continue;
        }
        if (temp2->next == NULL)
        {
            temp2 = headA;
            if (temp2->next == NULL)
            {
                temp1 = headB;
                mark1 = 1;
            }
            mark2 = 1;
            continue;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
        {
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return NULL;
}