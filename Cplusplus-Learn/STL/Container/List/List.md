##List
list的底层是一个双向链表，以结点为单位存放数据，结点的地址在内存中不一定连续，每次插入或删除一个元素，就配置或释放一个元素空间。

list不支持随机存取，如果需要大量的插入和删除，而不关心随即存取，可选用List

####常用函数：
list.push_back(elem)	在尾部加入一个数据
list.pop_back()	        删除尾部数据
list.push_front(elem)	在头部插入一个数据
list.pop_front()	    删除头部数据
list.size()	            返回容器中实际数据的个数
list.sort()             排序，默认由小到大 
list.unique()           移除数值相同的连续元素
list.back()             取尾部迭代器
list.erase(iterator)    删除一个元素，参数是迭代器，返回的是删除迭代器的下一个位置


