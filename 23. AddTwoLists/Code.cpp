ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans= new ListNode;
        ListNode* temp=ans;
        int data1,carry=0,x;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {   
            if(l1!=NULL && l2!=NULL )
            {
                x= (l1->val) + (l2 -> val) +carry;
                l1= l1->next;
                l2= l2->next;
            }
            else if(l2!=NULL)
            {
                x= l2 -> val + carry;
                l2= l2->next;
            }
            else if(l1!=NULL) {
                x= l1 -> val + carry;
                l1= l1->next;
            }
            else
            {
                x=carry;
            }
            carry= x/10;
            x = x%10;
            ans->next=new ListNode(x);
            ans=ans->next;

        }
        return temp->next;
    
    }