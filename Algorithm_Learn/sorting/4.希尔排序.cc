#include <iostream>
#include <ctime>

//希尔排序也是一种插入排序，它是简单插入排序经过改进之后的一个更高效的版本，也称为缩小增量排序。
//同时该算法是冲破O(n2）的第一批算法之一。

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

void ShellSorting(int *arr,int const n){
    int len = n;
    for (int gap = n/2;gap>0;gap /= 2){ //默认希尔序列
        for(int i =gap;i<len;i++){ //对每个子序列进行直接移动插入
            int temp = arr[i];
            int j = i;
            while(j>0 && temp < arr[j-gap]){
                arr[j] = arr[j-gap];
                j -= gap;
            }
            if(j != i){
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr1[10] = {1,3,2,5,9,4,7,8,0,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    ShellSorting(arr1,n);
    PrintArr(arr1,n);
    return 0;
}

//Shell排序比冒泡排序快5倍，比插入排序大致快2倍。
//Shell排序比起QuickSort，MergeSort，HeapSort慢很多。
//但是它相对比较简单，它适合于数据量在5000以下并且速度并不是特别重要的场合。
//它对于数据量较小的数列重复排序是非常好的