#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l1(5,10);
    l1.push_back(11);
    l1.push_front(9);
    for(list<int>::iterator it1 = l1.begin();it1!=l1.end();it1++){
        cout << *it1 << endl;
    }
    return 0;
}