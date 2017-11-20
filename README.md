# leetcode
coding with lin on https://leetcode.com

## 1.Minimum Depth of Binary Tree（111）
- 二叉树的遍历包括：
  - 前序遍历
  - 中序遍历
  - 后序遍历
  - 层次遍历
- Points：
  - 采用中序遍历实现
  - 若左右子树均不为空，返回深度更小的一个；若其中某一子树为空，返回另一子树的深度
  - 每个节点（若不为空），则遍历时深度赋值为1；若为空，深度为0
## 2.Evaluate Reverse Polish Notation（150）
- Vector
  - 向量 vector 是一种对象实体, 能够容纳许多其他类型相同的元素, 因此又被称为容器。 与string相同, vector 同属于STL(Standard Template Library, 标准模板库)中的一种自定义的数据类型, 可以广义上认为是数组的增强版。
  - 在使用它时, 需要包含头文件 vector, #include<vector>
  - vector 容器与数组相比其优点在于它能够根据需要随时自动调整自身的大小以便容下所要放入的元素。此外, vector 也提供了许多的方法来对自身进行操作。
- String
  - 注意双引号
- Stack
  - empty, size, push, pop, top
- Points:
  - atoi()不是跨平台的，Windows下可用，Linux下需要加.c_str()
  - 整型转字符串：to_string()
