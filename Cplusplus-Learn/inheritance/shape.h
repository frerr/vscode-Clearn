#ifndef SHAPE_H_
#define SHAPE_H_

class Shape 
{
public:
    Shape();
protected:
    int width;
    int height;
};
 
// 派生类
class Rectangle: public Shape
{
   public:
      Rectangle(int w=0,int h=0);
      int getArea()
      { 
        return (width * height); 
      }
};

#endif