#include "struct_ref.h"

void display(const free_throws & ft){
    using std::cout;
    cout << "Name: " << ft.name << '\n';
    cout << "Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}

void set_pc(free_throws & ft){
    if(ft.attempts !=0){
        ft.percent = 100.0f * float(ft.made)/float(ft.attempts);
    }
    else{
        ft.percent =0;
    }
}

free_throws & accumulate(free_throws & target,const free_throws & source){ //返回引用，效率高
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}


