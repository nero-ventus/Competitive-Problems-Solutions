

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if(head==NULL){
        return head;
    }
    SinglyLinkedListNode* cn=head;
    while(cn->next!=NULL){
        int ds=cn->next->data;
        while(ds==cn->data){
            if(cn->next!=NULL){
                cn->next=cn->next->next;
                if(cn->next!=NULL){
                    ds=cn->next->data;
                }
            }
            else{
                break;
            }
        }
        if(cn->next==NULL){
            break;
        }
        else{
            cn=cn->next;
        }
    }
    return head;
}

