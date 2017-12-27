/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    struct Node *ptr = headA;
    struct Node *ptr1 = headB;

    while(ptr!=NULL){
        while(ptr1!=NULL){
            if(ptr1==ptr){
                return ptr->data;
            }
            ptr1 = ptr1->next;
        }
        ptr1 = headB;
        ptr=ptr->next;
    }
    return 0;
}
