/*快慢指针法*/
#include<iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p,*q;
        if(head)
        {
            p=head;
            q=head->next;
            while(q&&q->next)
            {
                if(p==q)
                    return true;
                p=p->next;
                q=q->next->next;
            }
        }
        return false;
    }
};
