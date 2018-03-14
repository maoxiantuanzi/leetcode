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
  - 在使用它时, 需要包含头文件 vector, ```#include<vector>```
  - vector 容器与数组相比其优点在于它能够根据需要随时自动调整自身的大小以便容下所要放入的元素。此外, vector 也提供了许多的方法来对自身进行操作。
- String
  - 注意双引号
- Stack
  - ```empty```, ```size```, ```push```, ```pop```, ```top```
- Points:
  - ```atoi()```不是跨平台的，Windows下可用，Linux下需要加```.c_str()```
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
## 6. Binary Tree Postorder Traversal（145）
* 二叉树的后序遍历：左子树→右子树→根节点
* 非递归实现
* stack 栈
## 7. Binary Tree Preorder Traversal (144)
* 二叉树的先序遍历：根节点→左子树→右子树
* 非递归实现
* stack 栈
* vector 向量
## 8. Reorder List (143)
* 分三步解决此问题：
    * finding the middle node(使用**快慢指针法**)
    * reverse the the latter half(使用三个指针完成)
    * merge two part
* 注意链表为空的情况
* 注意指针是否指向空值
* 注意快慢指针法里第二个指针赋值为
  ```c++
    p2=p2->next->next;
  ```
## 9. Linked List Cycle (141)
* 此题是使用**快慢指针法**的典型例子，若链表中有环，则两个指针必定相遇
* 注意考虑链表为空的情况
* 注意循环结束的判断条件
## 10. Linked List Cycle II (142)
* 第一步同Linked List Cycle一样，使用**快慢指针法**确定链表中是否有环
![142](https://raw.githubusercontent.com/pengtt0119/leetcode/master/pic/142.png)
* 如图中所示，应考虑此种环的情况
* 如果快慢指针相遇了，把其中一个指针重新放到开头，快慢指针一起一步一步走再次相遇即是环的入口（有数学证明）
* 注意考虑链表为空的情况
## 11. Word Break (139) medium
* 本题使用了动态规划求解
* 字符串
  * 长度：```.size()```
  * 求字符串的子串：```s.substr(起始字符,子串长度)```
* vector:
  * 初始化vector：```vector<bool> dp(len, false)```
  * ```vector.end()```指向最后一个元素的下一个，而```rbegin()```指向最后一个,```begin()```指向第一个元素，```rend()```指向第一个元素
* find()函数：
  * 头文件：```#include <algorithm>```
  * 作用：查找第一次出现的字符串
  - 用法：```find(first, last, val)```


