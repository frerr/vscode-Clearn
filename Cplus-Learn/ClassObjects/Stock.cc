#include <iostream>
#include "Stock.h"

Stock::Stock(){
    std::cout << "Default constructor" << std::endl;
    company = " ";
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const std::string & co,long n,double pr){
    std::cout << "Constructor using " << co <<std::endl;
    company = co;
    if (n<0){
        std::cout << "Number of shares can not be negative;"
                  << company << "shares set 0;"<< std::endl;
        shares = 0;
    }
    else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

Stock::~Stock(){
    std::cout<<"Bye, "<<company << "!" <<std::endl;
}

void Stock::buy(long num,double price){
    if (num<0){
        std::cout << "Number of shares purchased can not be negative. "
                  << "Transaction is aborded" << std::endl;
    }
    else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num,double price){
    if (num<0){
        std::cout << "Number of shares sold can not be negative. "
                  << "Transaction is aborted." <<std::endl;        
    }
    else if (num > shares)
    {
        std::cout << "You can not sell more than you have! "
                  << "Transaction is aborted." <<std::endl;
    }
    else{
        shares -= num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

void Stock::show(){
    std::cout << "Company: "<< company
              << " Shares: "<<shares << std::endl
              << " Share Price: $" << share_val
              << " Total Worth: $" << total_val << std::endl;
}