/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method.

    struct Node *current = head;
    struct Node *temp = NULL;
    struct Node *prev = NULL;
    struct Node *next = NULL;

    if(current==NULL){
        return head;
    }

    while(current!=NULL){
       next = current->next;
       current->next = prev;
       if(current->prev!=NULL){
            prev->prev = current;
       }
       prev = current;
       current = next;
    }

    head = prev;



    return head;
}
