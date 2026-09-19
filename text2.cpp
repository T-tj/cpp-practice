// //1.指针与数组
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     cout<<"第一个元素为："<<arr[0]<<endl;
//     int*p=arr;
//     cout<<"利用指针访问第一个元素："<<*p<<endl;
//     p++;//4个字节
//     cout <<"利用指针访问第二个元素："<<*p<<endl;

//     int*p2 = arr;
//     for(int i = 0 ;i<10;i++)
//     {
//        // cout<<arr[i]<<endl;普通
//        cout<<*p2<<endl;//指针
//        p2++;
//     }

//     return 0;
// }



// //2.指针与函数
// #include<iostream>
// using namespace std;

// //值传递
// void s1(int a, int b)
// {
//     int temp = a;
//     a =b;
//     b = temp;
//     cout<< "s1 a = "<< a <<endl;
//     cout<<"s2 b = "<<b<<endl;
// }

// //地址传递
// void s2(int*p1,int*p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// int main(){
//     //试验值传递
//     int a = 10;
//     int b = 29;
//     s1(a,b);
//     cout<< "a = "<< a <<endl;
//     cout<<"b = "<<b<<endl;
//     //试验地址传递
//     s2(&a,&b);

//     cout<< "a = "<< a <<endl;
//     cout<<"b = "<<b<<endl;


// return 0;
// }


//综合案例
//封装1个函数，利用冒泡排序，实现对整形数组的升序排序
#include<iostream>
using namespace std;


void bu(int*arr,int len)
{
    for(int i=0; i<len-1 ;i++)
    {
        for(int j = 0; j<len-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;

            }
        }
    }
}


void print(int *arr,int len)
{
    for(int i = 0;i<len;i++)
    {
    cout<<arr[i]<<"  ";
    }
}

int main (){
    int arr[10]={4,6,7,3,9,1,0,5,8,10};
    int len = sizeof(arr)/sizeof(arr[0]);

    bu(arr,len);
    cout<<"排序后数列为："<<endl;
    print(arr,len);

    return 0;
}