#include <iostream>
#include <thread>
#include <windows.h> //sleep
 
using namespace std;
 
void t1()  //普通的函数，用来执行线程
{
    for (int i = 0; i < 10; ++i)
    {
        cout << "t1111\n";
        Sleep(1);
    }
}
void t2()
{
    for (int i = 0; i < 20; ++i)
    {
        cout << "t22222\n";
        Sleep(1);
    }
}
int main()
{
    thread th1(t1);  //实例化一个线程对象th1，使用函数t1构造，然后该线程就开始执行了（t1()）
    thread th2(t2);
 
    th1.join(); // 必须将线程join或者detach 等待子线程结束主进程才可以退出
    th2.join(); 
 
    //or use detach
    //th1.detach();
    //th2.detach();
 
    cout << "here is main\n\n";
 
    return 0;
}

//可以使用detach来解决，detach是用来和线程对象分离的，这样线程可以独立地执行，不过这样由于没有thread对象
//指向该线程而失去了对它的控制，当对象析构时线程会继续在后台执行，但是当主程序退出时并不能保证线程能执行完。
//如果没有良好的控制机制或者这种后台线程比较重要，最好不用detach而应该使用join
