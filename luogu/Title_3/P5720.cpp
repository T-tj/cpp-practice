#include<iostream>
using namespace std;
int main()
{
    int a;
    int days = 1;//第一天就是初始长度
    cin>>a;
    while(a>1)
    {
        a = a/2; //整数除法自动向下取整
        days++;
    }
    
    cout<<days<<'\n';
    return 0;
}