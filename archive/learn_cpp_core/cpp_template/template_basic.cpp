#include<iostream>
using namespace std;

//交换两个整形函数
void swapInt(int &a,int &b)
{
    int temp = a;
     a = b;
     b = temp; 
}

//交换两个浮点型函数
void swapDouble(double &a,double &b)
{
    double temp = a;
     a = b;
     b = temp; 
}

//函数模板
template<typename T> //声明一个模板，告诉模板后面的代码中的T不要报错，T是一个通用数据类型
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    char z = 'z';

    //swapInt(a,b)
    //利用函数模板交换
    //两种方式使用函数模板

    //1、自动类型推导   
//注意1：自动类型推导，必须导出一致的数据类型才可以使用

    mySwap(a,b);//正确
    //mySwap(a,z);
    //报错是因为T的数据类型不一致

    cout<<"a = "<<a<<'\n';
    cout<<"b = "<<b<<'\n';
    cout<<"z = "<<z<<'\n';

    double c = 7.7;
    double d = 1.1;
    //2、显示指定类型，本身便要求类型一致
    mySwap <double>(c,d);  //相当直接告诉编译器 T是double类型
    
    cout<<"c = "<<c<<'\n';
    cout<<"d = "<<d<<'\n';
}

//注意2：模板必须要确定T的数据类型，才可以使用
template<class T>     //class与typename本质上没有区别
void func()
{
    cout<<"func 调用"<<'\n';
}

void test02()
{
    func<int>();      //若没有<int>则会报错
}



int main(){
    test01();
    test02();
    return 0 ;
}

