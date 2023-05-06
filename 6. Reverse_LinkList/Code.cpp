ListNode* reverseList(ListNode* head) 
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* temp;

        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;

            
        }
        //head=curr;
        return prev;
        
        
    }