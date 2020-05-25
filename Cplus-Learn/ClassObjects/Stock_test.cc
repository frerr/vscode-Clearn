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
    //std::cout << "Stock holdings:\n";
    int st;
    /*for(st=0;st<4;st++){
        stocks[st].show();
    }*/
    const Stock* top = &stocks[0]; //const表示top指向的数据不能改变
    for(st=0;st<4;st++){
        top = &(top->topval(stocks[st])); //遍历stocks数组元素，找到最大的
    }
    std::cout << "\nMost valuable holding: ";
    std::cout<<*top;
    Stock add1("ADD",0,0);
    add1 = stocks[0] + stocks[1] + stocks[2];// 等于 stocks[0].operator+(stocks[1] + stocks[2]); 从左向右结合
    std::cout<<*top;
    double n =10;
    add1 = n * add1;
    std::cout<<add1;
    return 0;
}
