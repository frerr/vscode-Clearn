#include <iostream>
#include <vector>
int min_path(const std::vector<std::vector<int>>& A)
{   
    if(A.size() == 0)
        return 0;
    
    int m = (int)A.size();
    int n = (int)A[0].size();
    
    std::vector<std::vector<int>> B(m, std::vector<int>(n, 0));
    
    B[0][0] = A[0][0];
    for(int i=1; i<m; ++i){
        B[i][0] = B[i-1][0] + A[i][0];
    }
    for(int j=1; j<n; ++j){
        B[0][j] = B[0][j-1] + A[0][j];
    }
    for(int i=1; i<m; ++i){
        for(int j=1; j<n; ++j){
            B[i][j] = std::min(B[i-1][j], B[i][j-1]) + A[i][j]; 
        }   
    }   

    return B[m-1][n-1];
}

int main(){
    std::vector<std::vector<int>> grid= {
        {1,2,3,4},
        {1,1,3,2},
        {3,2,1,4}
    };
    std::cout << min_path(grid) << std::endl;
    return 0;
}