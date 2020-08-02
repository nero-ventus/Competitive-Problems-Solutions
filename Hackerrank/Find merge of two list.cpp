

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* cn1=head1, * cn2=head2;
    int t1=0,t2=0;
    while(cn1!=NULL){
        t1++;
        cn1=cn1->next;
    }
    while(cn2!=NULL){
        t2++;
        cn2=cn2->next;
    }
    int dif;
    cn1=head1; cn2=head2;
    if(t1<t2){
        dif=t2-t1;
        while(dif--){
            cn2=cn2->next;
        }
    }
    else{
        dif=t1-t2;
        while(dif--){
            cn1=cn1->next;
        }
    }
    int res=0;
    while(cn1!=NULL and cn2!=NULL){
        if(cn1==cn2){
            res=cn1->data;
            break;
        }
        cn1=cn1->next;
        cn2=cn2->next;
    }
    return res;
}

