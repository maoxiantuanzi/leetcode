# leetcode
Coding with Lin on https://leetcode.com

## 1. Minimum Depth of Binary Tree（111）
- 二叉树的遍历包括：
  - 前序遍历
  - 中序遍历
  - 后序遍历
  - 层次遍历
- Points：
  - 采用中序遍历实现
  - 若左右子树均不为空，返回深度更小的一个；若其中某一子树为空，返回另一子树的深度
  - 每个节点（若不为空），则遍历时深度赋值为1；若为空，深度为0
## 2. Evaluate Reverse Polish Notation（150）
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
## 3. Max Points On A Line（未完成）
## 4. Sort List（148）
- 使用归并排序（分治法，是一种稳定排序）
- 快慢指针法
- 递归or迭代
- 对数组而言，归并排序的空间复杂度是O(n)，需要开出O(n)的额外空间来容纳数组，来表示归并后的顺序；对于链表则不需要这部分的空间开销，只需要改变next指针的指向，所以空间复杂度为O(1)
- 时间复杂度为O(nlogn)的算法：快速排序，归并排序，希尔排序，堆排序
- 归并排序的时间复杂度主要考虑两个函数的时间花销：划分函数mergeSort()和归并函数merge()的花销
## 5. Insertion Sort List（147）
* 使用插入排序
* 时间复杂度O(n^2)，空间复杂度O(1)
* 链表的基本操作
