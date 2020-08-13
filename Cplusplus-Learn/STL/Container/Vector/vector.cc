#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    for (int i=0;i<vec.size();i++){
        cout << vec.at(i)<<endl;
    }
    return 0;
}