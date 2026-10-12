// #include<iostream>
// using namespace std;
// int main(){
//     cout << "hello world ! "<<endl;
//     return 0;
// }

//猜数字游戏
#include<iostream>
#include<ctime>
using namespace std ;

int main(){

srand((unsigned int)time(NULL));

    int num = rand()%100+1;
    cout<<"请输入数字"<<endl;
    while(1)
{
    int X = 0;
cin >> X;
if(X>num)
{
	cout << "数字过大" << endl;
}
else if (X < num) 
{
	cout << "数字过小" << endl;
}
else {
	cout << "猜测正确" << endl;
	break;
}
}
return 0;
}