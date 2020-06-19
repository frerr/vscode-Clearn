#include "struct_ref.h"

#include <iostream>
#include <string>

int main(){
    free_throws one = {"a",13,10};
    free_throws two = {"b",23,1};
    free_throws three = {"c",45,23};
    free_throws team = {"Throwgoods",0,0};

    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team,one);
    display(team);

    display(accumulate(team,two));
    dup = accumulate(team,three); //结构体直接赋值
    std::cout << "Display team:\n";
    display(dup);
    return 0;
}