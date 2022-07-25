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
    ListNode* middleNode(ListNode* head) {
        //find middle position
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        }
        int pos=((len%2)==0)?len/2+1:(len+1)/2;
        
        //return middle node
        ListNode* curr=head;
        while(pos-- >1)
        {
            curr=curr->next;
        }
        return curr;
    }
};