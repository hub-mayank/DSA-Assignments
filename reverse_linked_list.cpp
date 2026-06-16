//leetcode solutuion:
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* cur = head;
        
        while (cur != nullptr) {
            ListNode* next_temp = cur->next;  
            cur->next = prev;                  
            prev = cur;                        
            cur = next_temp;                   
        }
        
        return prev;
    }
};