//友元
#include<iostream>
#include<string>
using namespace std;

class Building
{
    //添加友元，使类外函数能够访问private
    friend void goodfriend(Building *building) ;

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
    string m_SittingRoom;  //客厅
private:
    string m_BedRoom;      //卧室
};

//全局函数
void goodfriend(Building *building) 
{
    cout<<"好朋友全局函数 正在访问："<<building->m_SittingRoom<<'\n';

    cout<<"好朋友全局函数 正在访问："<<building->m_BedRoom<<'\n';
}
void test()
{
    Building building;
    goodfriend(&building);
}

int main(){
    test();
    return 0;
}