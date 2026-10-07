#include<iostream>
#include"point.h"
#include"circle.h"
using namespace std;

   
int main()
{   
    //创建圆
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    
    //创建点
    Point p;
    p.setX(7);
    p.setY(7);

    //判断关系
    isInCircle(c,p);

    return 0;
}