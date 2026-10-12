//设计学生类
// #include<iostream>
// #include<string>
// using namespace std;
// class student
// {
// public:
// //属性
//     string Name;
//     int Id;
// //行为
//     void showstudent()
//     {
//         cout<<"姓名："<<Name<<endl<<"学号: "<<Id<<endl;
//     }
//     void setname (string name)
//     {
//         Name = name;

//     }
//     void setid (int id)
//     {
//         Id = id;
//     }
// };
// int main(){
//     student s1;
//     s1.setname("张三"); //s1.Name = "张三";
//     s1.setid(1); //s1.Id = 1;
//     s1.showstudent();
//     return 0;
// }

//立方体类
#include<iostream>
using namespace std;
class Cube
{
    public:
//设置
    void seth(int h)
    {
        H = h;
    }
    void setl(int l)
    {
        L = l;
    }
    void setw(int w)
    {
        W = w;
    }
//获取
    int getH()
    {
        return H;
    }
    int getL()
    {
        return L;
    }
    int getW()
    {
        return W;
    }

    int getS()
    {
        return (H*L+H*W+L*W)*2;
    }
    int getV()
    {
       return H*L*W;  
    }

    private:
    int H;
    int L;
    int W;
};

//利用全局函数判断两个立方体是否相等
bool issame(Cube &z1,Cube &z2)
{
    if(z1.getH() == z2.getH ()&&z1.getL() == z2.getL()&&z1.getW() == z2.getW())
    {
        return true;//1
    }
    return false;//0
}
int main(){
    cout<<"开始测试"<<endl;
    Cube z1;
    z1.seth(2);
    z1.setl(3);
    z1.setw(4);
    z1.getH();
    z1.getL();
    z1.getW();
    
    cout<<"高为： "<<z1.getH()<<endl;
    cout<<"长为： "<<z1.getL()<<endl;
    cout<<"宽为： "<< z1.getW()<<endl;
    cout<<"长方体的面积为： "<<z1.getS()<<endl;
    cout<<"长方体的体积为： "<<z1.getV()<<endl;
    
    Cube z2;
    z2.seth(3);
    z2.setl(4);
    z2.setw(7);//此时不相等
    bool ret = issame(z1,z2); //因为isname是bool，所以创建bool数据接收
    if(ret)
    {
        cout<<"z1和z2是相等的"<<endl;
    }  
    else
    {
        cout<<"z1和z2是不相等的"<<endl;
    }  
    return 0;
}

