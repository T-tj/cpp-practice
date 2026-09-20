# include <iostream>
# include <string>
using namespace std;
struct Hero
{
    string name;
    int age;
    string sex;
};


void Array (struct Hero arr[],int len)
{
    for(int i = 0;i<len-1; i++)
    {
        for(int j = 0;j<len-i-1;j++)
        {
            if(arr[j].age>arr[j+1].age)
            {
            struct Hero temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
};
void printArray (struct Hero arr[],int len)
{
    for(int i = 0;i<len; i++)
    {
      cout<<"姓名："<<arr[i].name<<"   "<<"年龄："<<arr[i].age<<"   "<<"性别："<<arr[i].sex<<endl;

    }

}
int main (){
struct Hero arr[5]=
{
    {"刘",28,"男"},
    {"关",25,"男"},
    {"张",27,"男"},
    {"赵",21,"男"},
    {"貂",15,"女"}
};
int len = sizeof(arr)/sizeof(arr[0]);
    Array(arr,len);
    printArray(arr,len);


    return 0;
}

