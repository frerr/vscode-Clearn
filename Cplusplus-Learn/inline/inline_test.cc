#include <iostream>

inline double square(double x) {return x * x;}

int main(){
    using std::cout;
    using std::endl;
    double a = 13.0;
    double b = square(4.5);
    double c = square(4.5+7.5);
    cout << "a*a is "<< square(a) << endl;
    cout << "b*b is "<< square(b) << endl;
    cout << "c++*c++ is " << square(c++) << endl;
 }


 