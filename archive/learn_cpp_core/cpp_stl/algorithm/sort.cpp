#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用排序算法sort
void myprint(int val)
{
    cout<<val<<"  ";
}
void test01()
{
    vector<int>v;
    v.push_back(31);
    v.push_back(70);
    v.push_back(7);
    v.push_back(17);
    v.push_back(13);

    //利用sort进行升序,sort默认从小到大
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myprint);
    cout<<'\n';

    //改变为降序
    sort(v.begin(),v.end(),greater<int>()); //greater改变规则，使从大到小
    for_each(v.begin(),v.end(),myprint);
    cout<<'\n';

}
int main()
{
    test01();
    return 0 ;
}