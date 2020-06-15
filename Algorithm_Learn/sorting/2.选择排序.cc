#include <iostream>

void swap(int &a,int &b){
    int k = b;
    b = a;
    a = k;
}

void SelectSorting(int *arr1,int n){
    int len = n;
    for(int i=0;i<len-1;i++){
        int minindex = i;
        for(int j=i+1;j<len;j++){
            if(arr1[j]<arr1[minindex]){
                minindex = j;
            }
        }
        swap(arr1[i],arr1[minindex]);
    }    
}

int main(){
    int arr1[10] = {1,3,2,5,9,4,7,8,0,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    SelectSorting(arr1,n);
    for(int k=0;k<10;k++){
        std::cout << arr1[k] << std::endl;
    }
    return 0;
}

//时间复杂度O(n^2)，空间复杂度O(1);