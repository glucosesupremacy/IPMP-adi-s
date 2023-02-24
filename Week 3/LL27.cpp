void mergeList(struct Node **p, struct Node **q)
{
     // Code here
     struct Node* first = *p;
     struct Node* second = *q;
     while(first != NULL && second != NULL){
        Node* temp = first->next;
        first->next = second;
        Node* temp2 = second->next;
        second->next = temp;
        first = temp;
        second = temp2;
     }
}