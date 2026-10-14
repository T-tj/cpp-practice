#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

//常用排序算法 random_suffle
void myprint(int val)
{
    cout<<val<<"  ";
}
void test()
{
    srand((unsigned int)time(NULL));//随机数种子，没有他的话每次打乱都是一样的
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
    //利用洗牌算法打乱顺序
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),myprint);
    cout<<'\n';
}
int main()
{
    test();
    return 0;
}