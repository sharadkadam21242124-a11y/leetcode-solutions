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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        else{
            ListNode* prv=NULL;
            ListNode* slow=head;
            ListNode* fast=head;
            ListNode* back=NULL;
            ListNode* curr=head;
            ListNode* front=head->next;

            while(fast!=NULL && fast->next!=NULL){
                prv=slow;
                slow=slow->next;
                fast=fast->next->next;
            }
            if(fast==NULL){
                prv->next=NULL;
                curr=slow;
                front=slow->next;
            }
            else{
                curr=slow->next;
                front=curr->next;
                slow->next=NULL;
            }
            while(curr!=NULL){
                curr->next=back;
                back=curr;
                curr=front;
                if(front==NULL){
                    continue;
                }
                else{
                    front=front->next;
                }   
            }
            while(back!=NULL){
                if(head->val != back->val){
                    return false;
                }
                head=head->next;
                back=back->next;
            }
            return true;
        }
    }
};