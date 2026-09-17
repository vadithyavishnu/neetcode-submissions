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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1=list1;
        ListNode* h2=list2;
        ListNode* ans = new ListNode(-1);
        ListNode* mer=ans;

        while(h1 && h2){
            if(h1->val < h2->val){
              ans->next=new ListNode(h1->val);
                h1=h1->next;
            }
            else{
                ans->next= new ListNode(h2->val);
                h2=h2->next;
            }
            ans=ans->next;
        }
        while(h1){
           ans->next=new ListNode(h1->val);
            h1=h1->next;
            ans=ans->next;
        }
        while(h2){
             ans->next= new ListNode(h2->val);
            h2=h2->next;
            ans=ans->next;
        }
        return mer->next;
    }
};
