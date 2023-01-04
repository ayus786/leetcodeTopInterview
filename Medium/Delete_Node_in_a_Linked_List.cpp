// naive brute force
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        while(temp->next->next){
            temp->val = temp->next->val;
            temp=temp->next;
        }
        temp->val = temp->next->val;
        ListNode* ptr = temp->next;
        temp->next=NULL;
        delete ptr;
    }
};

// with no memory leak-> assign the node to the next node
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* next = node->next;
        *node = *next;
        delete next;
    }
};

// you can think about doing *node = *node->next it will run the testcase but it will cause memory leak
// because lets say you have 1->2->3->4 and your target node is 3 then according to this solution our output will be correct as 1->2->4 but
// there's the original node with value 4 being all alone now. It is lost and its memory is only freed by the operating system when the program exits 
