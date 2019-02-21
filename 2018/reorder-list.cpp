/*******
    step 1: finding the middle node
    step 2: reverse the the latter half
    step 3: merge two part
 */
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *head2;
        ListNode *p1, *p2, *temp;
        if(head)
        {
            p1=head;
            p2=p1->next;
            while(p2 && p2->next)
            {
                p1=p1->next;
                p2=p2->next->next;
            }
            head2=p1->next;
            p1->next=NULL;  //将链表平均分割成两部分
            //将后半部分倒置
            p2=p1=head2;
            while(p1 && p1->next)
            {
                temp=p2;
                p2=p1->next;
                p1->next=p2->next;
                p2->next=temp;
            }
            head2=p2;
            //合并
            p1=head;
            p2=head2;
            while(p1 && p2)
            {
                temp=p1->next;
                p1->next=p2;
                p2=p2->next;
                p1->next->next=temp;
                p1=temp;
            }
        }
    }
};
