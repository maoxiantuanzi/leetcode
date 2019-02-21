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
    ListNode* insertionSortList(ListNode* head) {
    //思路:新建一个链表, 遍历原链表，将每个节点加入新链表正确的位置
        ListNode *dummy=new ListNode(0);    //新链表，用来指向排序后的链表
        ListNode *cur=head;    //当前在原链表中指向的位置
        ListNode *pre=dummy;    //在新的顺序里排在当前指针之前一个位置的节点
        ListNode *nex=NULL;    //原链表中cur后面的一个节点

        while (cur) {
            nex=cur->next;
            //寻找应该插入的位置
            while(pre->next && cur->val > pre->next->val)
                pre=pre->next;
            //将cur插入当前位置
            cur->next=pre->next;
            pre->next=cur;
            pre=dummy;  //回到新链表的头结点
            cur=nex;    //节点位置向后挪一个
        }
        return dummy->next;
    }
};
