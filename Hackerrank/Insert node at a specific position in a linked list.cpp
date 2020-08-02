

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* aux=new SinglyLinkedListNode(data);
    if(head==NULL) return aux;
    if(position==0){
        head->data=data;
        return head;
    }
    SinglyLinkedListNode* aux2=head;
    int i=0;
    while(i!=position-1){
        aux2=aux2->next;
        i++;
    }
    aux->next=aux2->next;
    aux2->next=aux;
    return head;
}

