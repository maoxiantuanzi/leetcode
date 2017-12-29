#include <iostream>
#include <vector>
#include <stack>
using namespace std;
//Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        if(root==NULL)
            return v;
        s.push(root);
        TreeNode* cur;
        TreeNode* pre=NULL;//上一个遍历的节点

        while (!s.empty()) {
            cur=s.top();
            if(cur->left && pre!=cur->left && pre!=cur->right)
                s.push(cur->left);
            else if(cur->right && pre!=cur->right)
                s.push(cur->right);
            else
            {
                pre=cur;
                v.push_back(pre->val);
                s.pop();
            }
        }//while
        return v;
    }
};
