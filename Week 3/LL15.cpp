class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        // root is temp1 ie.it should be the least;
        if (temp1 == NULL)
        {
            return temp2;
        }
        else if (temp2 == NULL)
        {
            return temp1;
        }
        if (temp1->val > temp2->val)
        {
            ListNode *temp = temp1;
            temp1 = temp2;
            temp2 = temp;
        }
        ListNode *head = temp1;
        while (temp1 != NULL && temp2 != NULL)
        {
            ListNode *temp = NULL;
            cout << temp1->val << endl;
            cout << temp2->val << endl;
            if (temp2->val >= temp1->val)
            {
                while (temp1->next != NULL && temp1->next->val <= temp2->val)
                {
                    temp1 = temp1->next;
                }
                temp = temp1->next;
                temp1->next = temp2;
                temp1 = temp;
                // temp2 = temp2->next;
            }
            else
            {
                while (temp2->next != NULL && temp2->next->val < temp1->val)
                {
                    temp2 = temp2->next;
                }
                temp = temp2->next;
                temp2->next = temp1;
                temp2 = temp;
                // temp1 = temp1->next;
            }
        }
        return head;
    }
};

// RECURSIVE APPROACH

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *result = NULL;
        if (list1 == NULL)
        {
            return list2;
        }
        else if (list2 == NULL)
        {
            return list1;
        }
        if (list1->val <= list2->val)
        {
            result = list1;
            result->next = mergeTwoLists(list1->next, list2);
        }
        else
        {
            result = list2;
            result->next = mergeTwoLists(list1, list2->next);
        }
        return result;
    }
};