Node *merge(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }
    else if (second == NULL)
    {
        return first;
    }
    Node *res = NULL;
    if (first->data <= second->data)
    {
        res = first;
        res->bottom = merge(first->bottom, second);
    }
    else
    {
        res = second;
        res->bottom = merge(first, second->bottom);
    }
    return res;
}

Node *flatten(Node *root)
{
    // Your code here
    if (root == NULL || root->next == NULL)
    {
        return root;
    }
    root->next = flatten(root->next);
    root = merge(root, root->next);
    return root;
}