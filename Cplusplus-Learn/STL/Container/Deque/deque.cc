#include <iostream>
#include <deque>
using namespace std;
int main()
{
    //初始化一个空vector容量
    deque<int>d;
    //向value容器中的尾部依次添加 S、T、L 字符
    d.push_back(1); //{1}
    d.push_back(2); //{1,2}
    d.push_back(3); //{1,2,3}
    d.push_front(0); //{0,1,2,3}

    //调用 size() 成员函数输出该容器存储的字符个数。
    printf("元素个数为：%d\n", d.size());
   
    //使用迭代器遍历容器
    for (auto i = d.begin(); i < d.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}