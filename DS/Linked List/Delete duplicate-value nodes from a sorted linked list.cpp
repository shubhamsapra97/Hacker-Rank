/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    struct Node *ptr = head;
    if(head == NULL){
        return NULL;
    }
    x:1;
    while(ptr->next != NULL){
        if(ptr->data == ptr->next->data){
            ptr->next = ptr->next->next;
            goto x;
        }
        ptr=ptr->next;
    }
    return head;
}
