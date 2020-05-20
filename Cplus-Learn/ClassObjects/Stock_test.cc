#include <iostream>

#include "Stock.h"

#include <string>

int main(){
    {
    Stock kate("Jordan",12,20);
    kate.show();
    Stock joe;
    joe.show();
    Stock *pr = new Stock ("Nike",10,15);
    pr->show();
    delete pr;
    }
    std::cout << "class done"<<std::endl;
    return 0;
}