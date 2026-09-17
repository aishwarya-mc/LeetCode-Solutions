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
            ListNode* slow = head;
            ListNode* fast = head;
            ListNode* temp = head;

            while(fast!=nullptr && fast->next!=nullptr  && fast->next->next!=nullptr) {
                slow = slow->next;
                fast = fast->next->next;
            }


            ListNode* prev = nullptr;
            ListNode* curr = slow->next;

            while(curr!=nullptr) {
                ListNode* nextnode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextnode;
            }

            ListNode* t = prev;
            while(temp!=nullptr&& prev!=nullptr) {
                if(temp->val != prev->val) { return false;}

            temp = temp->next;
            prev = prev->next;
            }

            return true;
    
    }
};