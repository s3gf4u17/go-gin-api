struct ListNode {
    int val;
    struct ListNode *next;
};

#include<stdio.h>

struct ListNode* reverseList(struct ListNode* head){
    if(!head) return head;
    
    struct ListNode* tailPointer=(struct ListNode*)malloc(sizeof(struct ListNode));
    
    tailPointer->val=head->val;
    tailPointer->next=NULL;
    head=head->next;
    
    while(head){
        struct ListNode* temp = tailPointer;
        tailPointer = head;
        head = head->next;
        tailPointer->next = temp;
    }
    
    return tailPointer;
}