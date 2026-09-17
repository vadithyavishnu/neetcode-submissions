/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* rever(ListNode *head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next;

        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* temp=head;
       int n=0;
       while(temp){
        n++;
        temp=temp->next;
       }
       ListNode* tem=head;
       int k=1;
       while(k<(n+1)/2){
        k++;
        tem=tem->next;
       }
       ListNode* t2=tem->next;
       tem->next=NULL;
       t2=rever(t2);

       ListNode* t3=tem;
       ListNode* first=head;
       ListNode* second=t2;

       while(second){
        ListNode* t1=first->next;
        ListNode* t2=second->next;
        first->next=second;
        second->next=t1;
        first=t1;
        second=t2;

       }
        
    }
};
