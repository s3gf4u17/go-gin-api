struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* middleNode(struct ListNode* head){
    int count = 0;
    struct ListNode* middle = head;
    
    while (head){
        count++;
        if (count==2){
            count = 0;
            middle = middle->next;
        }
        head = head->next;
    }
    
    return middle;
}