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
    ListNode* add(ListNode* l1, ListNode* l2, int carr){
        if(!l1 && !l2 && carr==0)return nullptr;

        int v1=0;
        int v2=0;
        if(l1) v1= l1->val;
        if(l2) v2= l2->val;

        int sum = v1 + v2+ carr;
        int digit=sum%10;
        int curr= sum/10;

        ListNode* newnode= add((l1 ? l1->next:nullptr), (l2 ? l2->next:nullptr), curr);
        return new ListNode(digit, newnode);
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1,l2,0);
    }
};
