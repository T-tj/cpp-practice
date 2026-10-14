#include<iostream>
using namespace std;
int main()
{
    int y,m;
    cin>>y>>m;
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(y%4==0 && y%100!=0 ||y%400 == 0)
    {
        days[2] = 29;
    }
    cout<<days[m]<<'\n';
    return 0 ;
}