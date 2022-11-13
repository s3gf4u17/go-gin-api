#include<stdbool.h>
#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if(head==NULL) return false;
    struct ListNode* pointer1 = head;
    struct ListNode* pointer2 = pointer1->next;
    if (pointer1==pointer2) return pointer1;
    
    while (pointer1->next && pointer2->next && pointer2->next->next){
        pointer1 = pointer1->next;
        pointer2 = pointer2->next->next;
        if (pointer1 == pointer2) return true;
    }
    
    return false;
}