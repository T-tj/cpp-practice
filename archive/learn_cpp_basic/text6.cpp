//程序执行前：代码区与全局区

//代码区
//1.共享：对于频繁被执行的代码，只需在内存中存一份代码
//2.只读：代码区中的代码是只读的，不能被修改

//全局区
#include <iostream>
using namespace std;
//全局常量
const int k_g_a = 10;
const int k_g_b = 20;
//全局变量
    int g_a = 10;
    int g_b = 20;
int main (){
    //局部变量
    int a = 20;
    int b = 30;
    cout << "全局变量的地址为: " << (long long)&g_a << endl;
    cout << "全局变量的地址为: " << (long long)&g_b << endl;
    cout << "局部变量的地址为: " << (long long)&a << endl;
    cout << "局部变量的地址为: " << (long long)&b << endl;

    //静态变量
    static int s_a = 30;
    static int s_b = 40;
    cout << "静态变量的地址为: " << (long long)&s_a << endl;
    cout << "静态变量的地址为: " << (long long)&s_b << endl;

    //常量
    //字符串常量
    cout<< "字符串常量的地址为: " << (long long)&"hello world" << endl;
    //const修饰的变量
    //const修饰的全局变量，const修饰的局部变量
    cout << "const修饰的全局常量的地址为: " << (long long)&k_g_a << endl;
    cout << "const修饰的全局常量的地址为: " << (long long)&k_g_b << endl;
    const int c_l_a = 50;
    const int c_l_b = 60;
    cout << "const修饰的局部常量的地址为: " << (long long)&c_l_a << endl;
    cout << "const修饰的局部常量的地址为: " << (long long)&c_l_b << endl;

    return 0;
}