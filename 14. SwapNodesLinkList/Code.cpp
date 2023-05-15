    int count_(ListNode* head){
        int c=0;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* swapNodes(ListNode* head, int k) {

        int count= count_(head);
        int Nth=(count+1)-k;

        int val1,val2;
        int c=1;

        ListNode* temp=head;
        while(temp!=NULL){
            if(c==k){
                val1=temp->val;
            }
            if(c==Nth){
                val2=temp->val;
                //temp->val=val1;
            }
            c++;
            temp=temp->next;
        }

        c=1;
        temp=head;
        while(temp!=NULL){
            if(c==k){
                temp->val=val2;
            }
            if(c==Nth){
            
                temp->val=val1;
            }
            c++;
            temp=temp->next;
        }

        return head;
    }