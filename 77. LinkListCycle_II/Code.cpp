ListNode *detectCycle(ListNode *head) {
        //ListNode* ans = new ListNode(-1);
        //map<ListNode*, bool> visited;
        if(head == NULL || head->next == NULL ){
            return NULL;
        }
        ListNode* curr = head;
        ListNode* fast = head;
        while(curr!=NULL && fast != NULL
               && fast->next != NULL)
        {
            curr=curr->next;
            fast=fast->next->next;
            if(curr == fast)
            {
                break;
            }
            //map[curr] = true;
        }
        if (curr != fast)
            return NULL;
 
        // reset slow pointer to headn
        curr = head;
        while(curr != fast){
            curr = curr->next;
            fast = fast->next;
        }
        
        return curr;
    }