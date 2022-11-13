#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode headStruct;
    struct ListNode *headPointer = &headStruct;
    
    if (!list1 && !list2) return NULL;
    
    while(list1&&list2){
        if(list1->val<list2->val){
            headPointer->next=list1;
            list1=list1->next;
            headPointer=headPointer->next;
        }
        else{
            headPointer->next=list2;
            list2=list2->next;
            headPointer=headPointer->next;
        }
    }
    
    if (list1){
        headPointer->next=list1;
    }
    else if (list2){
        headPointer->next=list2;
    }
    
    return headStruct.next;
}