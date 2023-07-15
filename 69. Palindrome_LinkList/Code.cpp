bool isPalindrome(ListNode* head) {

        stack <int> s;
        ListNode* temp = head;

        while(temp !=NULL){
            s.push(temp->val);
            temp=temp->next;
        }
        while(head != NULL){
            if(head->val != s.top()){
                return false;
                
            }
            s.pop();
            head = head->next;
        }
        return true;
        
    }