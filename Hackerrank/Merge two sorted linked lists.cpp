

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    int vez=0;
    SinglyLinkedListNode* cn1=head1, * cn2=head2, * nh=NULL, * cn=NULL, * na=NULL;
    while(cn1!=NULL and cn2!=NULL){
        if(vez==0){
            if(cn1->data==cn2->data){
                nh=new SinglyLinkedListNode(cn1->data);
                nh->next=new SinglyLinkedListNode(cn2->data);
                cn=nh->next;
                cn1=cn1->next;
                cn2=cn2->next;
            }
            else{
                if(cn1->data<cn2->data){
                    nh=new SinglyLinkedListNode(cn1->data);
                    cn=nh;
                    cn1=cn1->next;
                }
                else{
                    nh=new SinglyLinkedListNode(cn2->data);
                    cn=nh;
                    cn2=cn2->next;
                }
            }
            vez++;
        }
        else{
            if(cn1->data==cn2->data){
                na=new SinglyLinkedListNode(cn1->data);
                na->next=new SinglyLinkedListNode(cn2->data);
                cn->next=na;
                cn=na->next;
                cn1=cn1->next;
                cn2=cn2->next;
            }
            else{
                if(cn1->data<cn2->data){
                    na=new SinglyLinkedListNode(cn1->data);
                    cn->next=na;
                    cn=na;
                    cn1=cn1->next;
                }
                else{
                    na=new SinglyLinkedListNode(cn2->data);
                    cn->next=na;
                    cn=na;
                    cn2=cn2->next;
                }
            }
        }
    }
    while(cn1!=NULL){
        cn->next=new SinglyLinkedListNode(cn1->data);
        cn=cn->next;
        cn1=cn1->next;
    }
    while(cn2!=NULL){
        cn->next=new SinglyLinkedListNode(cn2->data);
        cn=cn->next;
        cn2=cn2->next;
    }
    return nh;
}

