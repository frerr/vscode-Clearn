#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Point3d{
    double x,y,z;
    public:
    Point3d(double x,double y,double z):x(x),y(y),z(z){}
    bool operator == (const Point3d &p) {
        return (this->x == p.x)&&(this->y == p.y)&&(this->z == p.z);
    }
};

int main(){
    vector<Point3d> p{{0,0,0},{1,2,3},{1.1,2.1,3.1},{10,11,11}};
    vector<Point3d>::iterator result = find(p.begin(),p.end(),Point3d(10,11,1)); 
    if (result != p.end())  
        cout << "找到" << endl;
    else 
        cout << "没找到" << endl;
}