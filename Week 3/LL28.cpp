class Solution
{
public:
    // Function to sort the given linked list using Merge Sort.
    Node *merge(Node *temp1, Node *temp2)
    {
        if (temp1 == NULL)
        {
            return temp2;
        }
        else if (temp2 == NULL)
        {
            return temp1;
        }
        Node *res = NULL;
        if (temp1->data <= temp2->data)
        {
            res = temp1;
            res->next = merge(temp1->next, temp2);
        }
        else
        {
            res = temp2;
            res->next = merge(temp1, temp2->next);
        }
        return res;
    }
    Node *mergeSort(Node *head)
    {
        // your code here
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *slow = head;
        Node *fast = head;
        // EXTREMELY IMPORTANT THAT YOU STOP FAST EARLIER THAN USUAL FOR LINKED LISTS
        while (slow != NULL && fast != NULL && fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *list2 = slow->next;
        slow->next = NULL;
        head = merge(mergeSort(head), mergeSort(list2));
        return head;
    }
};