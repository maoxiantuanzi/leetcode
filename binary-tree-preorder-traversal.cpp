#include <iostream>
#include<stack>
#include <vector>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        if(root==NULL)
            return v;
        s.push(root);
        while(!s.empty())
        {
            root=s.top();s.pop();
            v.push_back(root->val);
            if(root->right) s.push(root->right);//先入栈的后访问
            if(root->left) s.push(root->left);
        }
        return v;
    }
};
