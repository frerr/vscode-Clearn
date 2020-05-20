#include <iostream>

#include "Stock.h"

#include <string>

int main(){
    Stock stocks[4] = {
        Stock("Jodan",12,20),
        Stock("Nike",20,30),
        Stock("Addi",18,25),
        Stock("Udem",22,40)
    };
    std::cout << "Stock holdings:\n";
    int st;
    for(st=0;st<4;st++){
        stocks[st].show();
    }
    const Stock* top = &stocks[0]; //const表示top指向的数据不能改变
    for(st=0;st<4;st++){
        top = &(top->topval(stocks[st])); //遍历stocks数组元素，找到最大的
    }
    std::cout << "\nMost valuable holding: ";
    top->show();
    return 0;
}
