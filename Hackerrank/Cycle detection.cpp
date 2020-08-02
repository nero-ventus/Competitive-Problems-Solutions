

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode * f=head, * m=head;
    int bande=0, vez=0;
    while(f!=NULL){
        if(vez!=0){
            if(f==m){
                bande++;
                break;
            }
        }
        else{
            vez++;
        }
        if(f->next!=NULL){
            f=f->next->next;
        }
        else{
            f=f->next;
        }
        m=m->next;
    }
    if(bande==0){
        return false;
    }
    else{
        return true;
    }
}

