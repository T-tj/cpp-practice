// #include<iostream>
// #include<string>
// using namespace std;

// //结构体
// struct student
// {
//     string name;
//     int age;
//     int score;
// };

// int main(){
//     student s1;
//     s1.name = "李四";
//     s1.age = 20;
//     s1.score = 100;
//     cout <<"姓名："<<s1.name<<endl<<"年龄："<<s1.age<<endl<<"成绩："<<s1.score<<endl;

// //结构体数组
// student arr[3]=
// {
//     {"张三",10,90},
//     {"李四",20,100},
//     {"王五",25,85}
// };
// arr[2].name = "赵六";
// arr[2].age = 36;
// arr[2].score = 70;

// for(int i =0;i<3;i++)
// {
//     cout <<"姓名："<<arr[i].name<<"  "<<"年龄："<<arr[i].age<<"  "<<"成绩："<<arr[i].score<<endl;
// }
// return 0;
// }



// //结构体指针
// #include<iostream>
// #include<string>
// using namespace std;

// struct student
// {
//     string name;
//     int age;
//     int score;
// };

// int main (){
// student s = {"张三",10,90};
// student *p = &s;
// //通过指针访问结构体成员需要利用 "->"运算符
// cout <<"姓名："<<p->name<<"  "<<"年龄："<<p->age<<"  "<<"成绩："<<p->score<<endl;

//     return 0;
// }


// //嵌套结构体
// #include<iostream>
// #include<string>
// using namespace std;

// struct student
// {
//     string name;
//     int age;
//     int score;
// };
// struct teacher
// {
//     string name;
//     int age;
//     struct student s;
// };

// int main(){
//     teacher t = {"张三",30,{"李四",20,100}};
//     cout <<"姓名："<<t.name<<"  "<<"年龄："<<t.age<<"  "
//          <<"学生姓名："<<t.s.name<<"  "<<"学生年龄："<<t.s.age<<"  "<<"学生成绩："<<t.s.score<<endl;

//     return 0;

// }


//结构体做函数参数
#include<iostream>
#include<string>
using namespace std;
//值传递
struct student
{
    string name;
    int age;
    int score;
};
void printStudent(student s)
{
    cout <<"姓名："<<s.name<<"  "<<"年龄："<<s.age<<"  "<<"成绩："<<s.score<<endl;
};

//地址传递
void printStudent2(student *s)
{
    cout <<"姓名："<<s->name<<"  "<<"年龄："<<s->age<<"  "<<"成绩："<<s->score<<endl;
}

int main(){
    student s = {"李三",30,100};
    printStudent(s);
    printStudent2(&s);

    return 0;
}
