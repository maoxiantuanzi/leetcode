/*使用归并排序实现*/
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    // ListNode(int x) : val(x),next(NULL){}
};

class Solution{
public:
//可用递归或迭代来实现，此处用了递归
    ListNode* merge(ListNode* left, ListNode* right)
    {
        if(!left)
            return right;
        if(!right)
            return left;
        if(left->val <= right->val)
        {
            left->next=merge(left->next,right);
            return left;
        }
        else
        {
            right->next=merge(left,right->next);
            return right;
        }
    }
    ListNode* sortList(ListNode* head){
        //快慢指针法求中点
        ListNode* pre=head;
        ListNode* slow=head;    //慢指针
        ListNode* fast=head;    //快指针
        if(!head || !head->next)
            return head;
        while(fast && fast->next)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=NULL;

        ListNode* left=head;
        ListNode* right=slow;
        //左子链
        left=sortList(left);
        //右子链
        right=sortList(right);
        //合并
        ListNode* merged = merge(left,right);
        return merged;
    }
};
