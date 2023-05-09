ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL)
        {
            return list2;
        }
        if(list2 == NULL)
        {
            return list1;
        }
        if(list1 == NULL && list2 ==NULL)
        {
            return NULL;
        }

        ListNode* ans= new ListNode();
        ListNode* head=ans;

        while(list1  != NULL && list2 != NULL)
        {
            ListNode* temp= new ListNode;
            if(list1->val < list2->val)
            {
                temp->val=list1->val;
                list1 = list1->next;
            }
            
            else{
                temp->val=list2->val;
                list2 = list2->next;
            }
            //ListNode* temp= new ListNode;
            ans->next = temp;
            ans= ans->next;
        }
        while(list1  != NULL)
        {
            ListNode* temp= new ListNode;
            temp->val=list1->val;
            list1 = list1->next;
            //ListNode* temp= new ListNode;
            ans->next = temp;
            ans= ans->next;

        }

        while(list2 != NULL)
        {
            ListNode* temp= new ListNode;
            temp->val=list2->val;
            list2 = list2->next;
            
            ans->next = temp;
            ans= ans->next;

        }
        return head->next;

    }