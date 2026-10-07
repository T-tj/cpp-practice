#pragma once
#include "point.h"
 //圆类
    class Circle
    {
        private:
        int m_R;
        // int m_X;
        // int m_Y;
        //在类中可以让另一个类作为本来中的成员
        Point m_Center;

        public:
        void setR(int r);             //设置半径
        int getR();                   //获取半径
        void setCenter(Point center); //设置圆心
        Point getCenter();

    };

    //判断点和圆的关系
    void isInCircle(Circle &c , Point &p);
    