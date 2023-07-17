ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode*, bool> map;
        ListNode* temp =headA;

        while(temp!=NULL)
        {
            map[temp]=true;
            temp=temp->next;
        }

        temp = headB;
        while(temp!=NULL)
        {
            if(map[temp] == true){
                return temp;
            }
            temp=temp->next;
        }

        return NULL;

    }