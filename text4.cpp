//结构体案例一（三名老师和每名老师有五名学生，给老师和学生赋值并输出）
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct student
{
    string sName ;
    int score;
};
struct teacher
{
    string tName;
    struct student k[5];
};
//给老师和学生赋值的函数
void assignment(teacher h[],int len)
{
    string nameseed = "ABCDE";
    //给老师开始赋值
    for(int i = 0; i<len; i++)
    {
        h[i].tName = "Teacher_";
        h[i].tName +=nameseed[i];

        //给每个老师的学生赋值
        for(int j = 0; j<5; j++)
        {
            h[i].k[j].sName = "Student_";
            h[i].k[j].sName +=nameseed[j];
            h[i].k[j].score = rand()%61+40;//40~100

        }
    }
}
    
//输出老师和学生信息的函数
void printinfo(teacher h[],int len)
{
    for(int i = 0; i<len; i++)
    {
        cout <<"老师姓名："<<h[i].tName<<endl;
        for(int j = 0; j<5; j++)
        {
            cout <<"\t学生姓名："<<h[i].k[j].sName<<"  "<<" 学生成绩："<<h[i].k[j].score<<endl;
        }
        cout <<endl;
    }
}


int main(){
    srand((unsigned int)time(NULL));
    struct teacher h[3];
    int len = sizeof(h)/sizeof(h[0]);
    assignment(h,len);
    printinfo(h,len);
    

    return 0;
}