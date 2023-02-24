//triplet that sums to given value
//just learn merge sort, doable after that

#include <bits/stdc++.h>
using namespace std;

Node* merge(Node* first, Node* second){
    if(first == NULL){
        return second;
    }else if(second == NULL){
        return first;
    }
    Node* res = NULL;
    if(first->data <= second->data){
        res = first;
        first->next  = merge(first->next,second);
    }else{
        res = second;
        second->next = merge(first,second->next);
    }
    return res;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newnode = slow->next;
    slow->next = NULL;
    return merge(mergeSort(head),mergeSort(newnode));
}

int main(){
    //LL 1
    //LL 2
    //LL 3
    LL2 = mergeSort(LL2);
    LL3 = mergeSort(LL3);
    LL3 = reverse(LL3);
    Node* key = LL1;
    while(key != NULL){
        int data = key->data;
        int start = LL2;
        int end = LL3;
        while(start != NULL && end != NULL){
            int sum  = start+end;
            if(sum < target - key){
                start = start->next;
            }else if(sum > target-key){
                end = end->next;
            }else{
                cout << " Found" << endl;
            }
        }
        key = key->next;
    }
    cout << "Not Found" << endl;
    return 0;
}