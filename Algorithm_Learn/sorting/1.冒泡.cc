#include <iostream>

void swap(int &a,int &b){
    int k = b;
    b = a;
    a = k;
}

void MaopaoSorting(int *arr1,int n){
    int len = n;
    for(int i=len;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr1[j]>arr1[j+1]){
                swap(arr1[j],arr1[j+1]);
            }
        }
    }    
}

int main(){
    int arr1[10] = {1,3,2,5,9,4,7,8,0,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    MaopaoSorting(arr1,n);
    for(int k=0;k<10;k++){
        std::cout << arr1[k] << std::endl;
    }
    return 0;
}

//时间复杂度O(n^2)，空间复杂度O(1);

//1