#include <iostream>
#include <thread>
#include <mutex>
#include <stdlib.h>
#include <chrono>
 
int cnt = 20;
std::mutex m; //mutex针对的是对线程的管理操作，而非针对数据。所以可以解释为什么mutex不需要跟数据

void t1()
{
    while (cnt > 0)
    {    
        std::lock_guard<std::mutex> lockGuard(m);
        std::cout <<"Lock th1"<<std::endl;
        if (cnt > 0)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(5));
            --cnt;
            std::cout <<"t1: "<<cnt << std::endl;
        }        
    }
}
void t2()
{
    while (cnt > 0)
    {
        std::lock_guard<std::mutex> lockGuard(m);
        std::cout <<"Lock th2"<<std::endl;
        if (cnt > 0)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(30));
            --cnt;
            std::cout <<"t2: "<< cnt << std::endl;
        }
    }
}
 
int main(void)
{
	std::thread th1(t1);
	std::thread th2(t2);
 
	th1.join();    //等待t1退出
	th2.join();    //等待t2退出
 
	std::cout << "here is the main()" << std::endl;
 
	return 0;
}