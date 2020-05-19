#include <iostream>

template <class T1, class T2>
void swap(T1 &a, T2 &b);

template <class T1,class T2>
void swap(T1 *a,T2 *b,int n);

int main(){
    using std::cout;
    using std::endl;
    int i =10;
    int j =100;
    swap(i,j);
    cout << "i = "<<i << endl;
    cout << "j = "<<j << endl;
    double k = 5.5;
    double l = 10.5;
    swap(k,l);
    cout << "k = "<< k << endl;
    cout << "l = "<< l << endl;
    int a[3] = {0,0,0};
    double b[3] = {1,1,1};
    swap(a,b,3);
    cout << "a0 = " << a[0] << endl;
    cout << "b0 = " << b[0] << endl;
    return 0;
    }

template <class T1, class T2>
void swap(T1 &a,T2 &b){
    T1 temp;
    temp = a;
    a = b;
    b = temp;
}

template <class T1,class T2>
void swap(T1 a[],T2 b[],int n){
    T1 temp;
    for (int i=0;i<n;i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}