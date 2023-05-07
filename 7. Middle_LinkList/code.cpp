ListNode* middleNode(ListNode* head) {
    ListNode* curr= head;
    while( head!=NULL&& head->next!=NULL){
        curr=curr->next;
        head=head->next->next;
    }
    return curr;
        
    }