#include"circle.h"
#include<iostream>
       
        void Circle::setR(int r)             //设置半径
        {
            m_R = r;
        }
        int Circle::getR()                   //获取半径
        {
            return m_R;
        }
        void Circle::setCenter(Point center) //设置圆心
        {
            m_Center = center;
        }
        Point Circle::getCenter()
        {
            return m_Center;
        }

   //判断点和圆的关系
    void isInCircle(Circle &c , Point &p)
    {
        //计算两点之间距离  平方
        long long distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())  +
                       (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
        //计算半径的平方
        long long rDistance = c.getR() * c.getR();
        //判断关系
        if(distance == rDistance)
        {
           std::cout <<"点在圆上"<<'\n';
        }
        else if (distance > rDistance)
        {
            std::cout <<"点在圆外"<<'\n';
        }
        else
        {
            std::cout <<"点在圆内"<< '\n';
        }
    }