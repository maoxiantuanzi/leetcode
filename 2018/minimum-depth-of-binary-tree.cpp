/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        int deep = 0;
        if(root != NULL)
        {
            int left_deep = minDepth(root->left);
            //遍历root
            deep++;
            int right_deep = minDepth(root->right);
            if(!left_deep)
                deep+=right_deep;
            else if(!right_deep)
                deep+=left_deep;
            else if(left_deep>right_deep)
                deep+=right_deep;
            else
                deep+=left_deep;
        }
        return deep;
    }
};
