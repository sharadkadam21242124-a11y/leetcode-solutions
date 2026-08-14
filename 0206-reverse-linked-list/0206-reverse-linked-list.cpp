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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        else{
            ListNode* back=NULL;
            ListNode* curr=head;
            ListNode* front=head->next;

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
            head=back;
            return head;
        }
        


    }
};