#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
#include <string>

class Stock{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val = shares*share_val;
    }
public:
    Stock(); //构造函数
    Stock(const std::string& co,long n=0,double pr=0); //构造函数重载+默认参数
    ~Stock(); //析构函数
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    friend void operator<<(std::ostream &os,const Stock &st);
    //<< 运算符重载
    const Stock& topval(const Stock& s) const;
    //1处const确保返回的Stock对象在以后的使用中不能被修改;
    //2处const：确保此方法不修改传递的参数S;
    //3处const：保证此方法不修改调用它的对象;
    const Stock operator + (const Stock & st) const;
    //运算符+重载
    friend Stock operator * (double m,const Stock &st);
};

#endif