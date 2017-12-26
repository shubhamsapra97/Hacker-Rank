/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method

    struct Node *ptr = head;
    struct Node *ptr1 = head;

    while(ptr1!=NULL && ptr!=NULL && ptr1->next!=NULL){
        ptr1 = ptr1->next->next;
        ptr=ptr->next;
        if(ptr==ptr1){
            return 1;
        }
    }
    return 0;
}
