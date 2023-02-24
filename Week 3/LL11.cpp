void deleteAlt(struct Node *head){
    // Code here
    if(head == NULL || head->next == NULL){
        return;
    }
    head->next = head->next->next;
    deleteAlt(head->next);
}