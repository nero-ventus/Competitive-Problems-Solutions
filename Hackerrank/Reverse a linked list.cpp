

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if(head==NULL) return head;
    SinglyLinkedListNode* aux=head;
    int i=0;
    while(aux->next!=NULL){
        i++;
        aux=aux->next;
    }
    SinglyLinkedListNode* nhead=aux;
    while(i--){
        SinglyLinkedListNode* aux2=head;
        while(aux2->next!=aux){
            aux2=aux2->next;
        }
        aux->next=aux2;
        aux=aux2;
    }
    head->next=NULL;
    return nhead;
}

