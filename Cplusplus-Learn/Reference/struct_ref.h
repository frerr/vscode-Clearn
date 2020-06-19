#ifndef STRUCT_REF_H_
#define STRUCT_REF_H_

#include <iostream>
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target,const free_throws & source);

#endif 