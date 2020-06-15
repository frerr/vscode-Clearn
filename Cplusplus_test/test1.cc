#include <iostream>
#include <vector>

int main(){
    std::vector <std::vector<int>> A(10,std::vector<int>(6,1));
    std::cout <<"Row is "<< A.size() << std::endl;
    std::cout <<"Col is "<< A[0].size() << std::endl;
    A[0][1] = 100;
    std::cout <<"Value is "<< A[0][0] << std::endl;   
    std::cout <<"Value is "<< A[0][1] << std::endl;
    return 0;
}
