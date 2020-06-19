内联函数通过inlian关键字，定义申明内联函数

内联函数可节约普通函数调用的时间，到也可能会因使用多而导致系统多。
《Google C++ Style Guide》约定：Define functions inline only when they are small, say, 10 lines or fewer.

宏无法做到传递参数，而是直接的文本替换。比如
#define SQUARE(X) X*X

a = SQUARE(5.0); is replaced by a = 5.0*5.0;
b = SQUARE(4.5+7.5);is replaced by b= 4.5+7.5*4.5+7.5 这里就有问题