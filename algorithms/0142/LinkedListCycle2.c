#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    if(head==NULL || head->next==NULL) return NULL;
    struct ListNode* pointer1 = head;
    struct ListNode* pointer2 = head;
    
    while (pointer1 && pointer2 && pointer2->next){
        pointer1 = pointer1->next;
        pointer2 = pointer2->next->next;
        if (pointer1 == pointer2) break;
    }
    
    if (pointer1!=pointer2) return NULL;
    
    pointer1 = head;
    while(pointer1!=pointer2){
        pointer1=pointer1->next;
        pointer2=pointer2->next;
    }
    
    return pointer1;
}