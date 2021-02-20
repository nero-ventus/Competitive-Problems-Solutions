class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h=new ListNode(), * cn=h,* naux=NULL;
        int resu=0, aux, bande=0;
        while(l1!=NULL and l2!=NULL){
            aux=l1->val+l2->val+resu;
            if(aux>9){
                resu=1;
                aux-=10;
            }   
            else
                resu=0;
            cn->val=aux;
            cn->next=new ListNode();
            naux=cn;
            cn=cn->next;
            l1=l1->next; l2=l2->next;
        }
        while(l1!=NULL){
            aux=l1->val+resu;
            if(aux>9){
                resu=1;
                aux-=10;
            }
            else
                resu=0;
            cn->val=aux;
            cn->next=new ListNode();
            naux=cn;
            cn=cn->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            aux=l2->val+resu;
            if(aux>9){
                resu=1;
                aux-=10;
            }
            else
                resu=0;
            cn->val=aux;
            cn->next=new ListNode();
            naux=cn;
            cn=cn->next;
            l2=l2->next;
        }
        if(resu>0) cn->val=resu;
        else naux->next=NULL;
        return h;
    }
};