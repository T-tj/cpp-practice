#include<iostream>
#include<string>
using namespace std;
void test01 ()
{
    string s1; //默认构造

    const char * str = "hello world!";
    string s2(str);
    cout<<"s2 = "<<s2<<'\n';

    string s3(s2);   //拷贝
    cout<<"s3 = "<<s3<<'\n';

    string s4(7,'a');  //7个字符a组成的字符串
    cout<<"s4 = "<<s4<<'\n';

}
int main(){
    test01();
    return 0;
}   