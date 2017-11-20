# leetcode
coding with lin

## 1.Minimum Depth of Binary Tree
- 二叉树的遍历包括：
  - 前序遍历
  - 中序遍历
  - 后序遍历
  - 层次遍历
- Points：
  - 采用中序遍历实现
  - 若左右子树均不为空，返回深度更小的一个；若其中某一子树为空，返回另一子树的深度
  - 每个节点（若不为空），则遍历时深度赋值为1；若为空，深度为0
