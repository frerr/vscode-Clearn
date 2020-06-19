#include <iostream>

void PrintArr(int const *arr,int const n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
}

static void merge(int arr[], int L, int mid, int R) { //额外的一个数组，进行合并
    int temp[R-L+1] = {0};
    int i = 0;
    int p1 = L;
    int p2 = mid + 1;
    // 比较左右两部分的元素，哪个小，把那个元素填入temp中
    while(p1 <= mid && p2 <= R) {
        temp[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
    }
    // 上面的循环退出后，把剩余的元素依次填入到temp中
    // 以下两个while只有一个会执行
    while(p1 <= mid) {
        temp[i++] = arr[p1++];
    }
    while(p2 <= R) {
        temp[i++] = arr[p2++];
    }
    // 把最终的排序的结果复制给原数组
    for(i = 0; i < sizeof(temp)/sizeof(temp[0]); i++) {
        arr[L + i] = temp[i];
    }
}

static void sort(int arr[],int L,int R) { //使用递归，进行分治处理（最小单元里元素1），最后合并数组
    if(L == R) {
        return;
    }
    int mid = L + ((R-L) >> 1);
    sort(arr, L, mid);
    sort(arr, mid + 1, R);
    merge(arr, L, mid, R);
}

static void merge_sort(int arr[],int n) { //主归并 函数
    sort(arr, 0, n-1);
}

int main(){
    int arr1[10] = {1,3,2,5,9,4,7,8,0,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    merge_sort(arr1,n);
    PrintArr(arr1,n);
    return 0;
}

//时间复杂度O(nlongn)，空间复杂度O(1)