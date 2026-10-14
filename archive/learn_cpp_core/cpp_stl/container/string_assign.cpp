#include<iostream>
#include<string>
using namespace std;
//string 赋值操作
//用 = 赋值或用 .assign 赋值
void test()
{
    //1.
    string str1;
    str1 = "hello world";
    cout<<"str1 = "<<str1<<'\n';
    //2.
    string str2;
    str2 = str1;
    cout<<"str2 = "<<str2<<'\n';
    //3.
    string str3;
    str3 = 'a';
    cout<<"str3 = "<<str3<<'\n';
    //4.
    string str4;
    str4.assign("hello C++");
    cout<<"str4 = "<<str4<<'\n';
    //5.
    string str5;
    str5.assign("hello C++",5);  //将字符串前五个字符输出，即输出hello
    cout<<"str5 = "<<str5<<'\n';
    //6.
    string str6;
    str6.assign(str5);
    cout<<"str6 = "<<str6<<'\n';
    //7.
    string str7;
    str7.assign(10,'t');
    cout<<"str7 = "<<str7<<'\n';
}

int main()
{
    test();
    return 0;
}