// SAME AS 31

struct Node *insert(struct Node *head, int data)
{
    // Code here
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        return newnode;
    }
    newnode->npx = head;
    head->npx = XOR(newnode, head->npx);
    return newnode;
}

vector<int> printList(struct Node *head)
{
    // Code here
    vector<int> res;
    Node *prev = NULL;
    while (head != NULL)
    {
        Node *temp = head;
        res.push_back(head->data);
        head = XOR(prev, head->npx);
        prev = temp;
    }
    return res;
}