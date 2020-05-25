#include "shape.h"
#include <iostream>

int main(void)
{
   using std::cout;
   using std::endl;
   int n1 = 10;
   int n2 = 15;
   Rectangle Rect(n1,n2); 
   // 输出对象的面积
   cout << "Total area: " << Rect.getArea() << endl;
    return 0;
}