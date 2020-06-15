#include <iostream>

void PrintArr(int const *arr,int const n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
}

void swap(int &a,int &b){
    int k = b;
    b = a;
    a = k;
}

void InsertSorting(int *arr,int const n){ //移动插入
    int len = n;
    for (int i = 1; i < len; i++) {
        int tmp = arr[i];
        int j = i;
        while (j > 0 && tmp < arr[j - 1]) {
            arr[j] = arr[j - 1]; //后移
            j--;
        }
        if (j != i) {
            arr[j] = tmp;
        }
    }
}

int main(){
    int arr1[10] = {1,3,2,5,9,4,7,8,0,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    InsertSorting(arr1,n);
    PrintArr(arr1,n);
    return 0;
}

//时间复杂度O(n^2)，空间复杂度O(1)