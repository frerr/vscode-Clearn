#include <iostream>

void PrintArr(int const *arr,int const n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
}

int Paritition1(int A[], int low, int high) { //标准分区函数
   int pivot_val = A[low]; //初始化基准。可优化成随机基准。。
   while (low < high) { //分区：基于基准，划分数据。低区都小于基准，高区都大于基准
     while (low < high && A[high] >= pivot_val) {
       --high;
     }
     A[low] = A[high];
     while (low < high && A[low] <= pivot_val) {
       ++low;
     }
     A[high] = A[low];
   }
   A[low] = pivot_val; //基准重新赋值
   return low; //返回基准索引
 }

 void QuickSort(int A[], int low, int high) //快排母函数
 {
   if (low < high) {
     int pivot = Paritition1(A, low, high);
     QuickSort(A, low, pivot - 1);
     QuickSort(A, pivot + 1, high);
   }
 }

int main(){
    int arr1[10] = {1,3,2,5,9,4,7,8,0,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    QuickSort(arr1,0,n);
    PrintArr(arr1,n);
    return 0;
}
