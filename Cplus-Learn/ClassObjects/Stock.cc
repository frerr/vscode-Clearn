#include <iostream>
#include "Stock.h"

Stock::Stock(){
    std::cout << "Default constructor " << company << std::endl;
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

void operator<<(std::ostream &os,const Stock &st){
    os << "Company: "<< st.company
              << " Shares: "<<st.shares << std::endl
              << " Share Price: $" << st.share_val
              << " Total Worth: $" << st.total_val << std::endl;
}

const Stock& Stock::topval(const Stock & s) const{
    if (s.total_val > this->total_val){
        return s;
    }
    else{
        return *this;
    }
}

const Stock Stock::operator + (const Stock & st) const{
    Stock temp;
    temp.share_val = this->share_val + st.share_val;
    temp.shares = this->shares + st.shares;
    return temp;
}

Stock operator * (double m,const Stock &st){
    Stock tmp;
    tmp.total_val = m * st.total_val;
    return tmp;
}