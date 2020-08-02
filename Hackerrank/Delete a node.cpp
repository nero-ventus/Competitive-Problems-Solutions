

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(head==NULL){
        return head;
    }
    if(position==0){
        head=head->next;
        return head;
    }
    position--;
    SinglyLinkedListNode* cn=head;
    while(position--){
        cn=cn->next;
    }
    cn->next=cn->next->next;
    return head;


}

