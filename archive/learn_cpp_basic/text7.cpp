//程序运行后

// #include <iostream>
// using namespace std;

// //栈区
// int*function(int a)//形参数据也会放在栈区中
// {
//     a = 100;
//     int c = 10;//栈区的局部变量c在函数运行结束后会被释放掉
//     return &c;
// }

// int main(){
// int* p= function(1);
// cout<< *p <<endl;//输出的值是随机的，因为c已经被释放掉了，p指向的是一个无效的地址
//     return 0;
// }


//堆区
#include <iostream>
using namespace std;

int* function() 
{

    //利用new关键字，可以将数据开辟到堆区
    //指针 本质上也是局部变量，存放在栈区中，但是指针保存的数据可以开辟在堆区中
    int* a = new int(10); // 在堆区分配内存，new返回的是堆区创建的首地址
    return a;
}

int main() {
    int* p = function();
    cout << *p << endl;
    delete p; // 释放堆区内存
    cout << *p << endl;//已释放，所以乱码
    return 0;
}
