ListNode* reverse(ListNode* &head){
        if(head->next==NULL || head==NULL )
        {
        return head;
        }

        ListNode* head1 = reverse(head->next);
        
        head->next->next=head;
        head->next=NULL;

        return head1;
    }
    int pairSum(ListNode* head) {
        ListNode* middle=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            middle=middle->next;
            fast=fast->next->next;
        }

        middle->next=reverse(middle->next);
        middle=middle->next;
        int maxi=INT_MIN;
        int sum=0;

        while(middle!=NULL){
            sum=head->val + middle->val;
            maxi=max(sum,maxi);
            head=head->next;
            middle=middle->next;
            sum=0;
        }
        return maxi;
    }