//水仙花数
//#include<iostream>
//using namespace std ;
//int main(){
//	int num=100;
//	do
//	{
//		int a=0;
//		int b=0;
//		int c=0;
//		a=num%10;
//		b=num/10%10;
//		c=num/100;
//		if(a*a*a+b*b*b+c*c*c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	}
//	while(num<1000);
//	return 0;
//}


////五小猪称重
//#include<iostream>
//using namespace std;
//int main() {
//	int arr[5] ={300,350,200,400,250};
//	int max=arr[0];
//	for(int i=0;i<5;i++)
//	{
//		if(arr[i]>max)
//		{
//			max =arr[i];
//		}
//	}
//	cout << "最重的小猪体重为：" << max<< endl;
//	return 0;
//}



//敲桌子
//#include<iostream>
//using namespace std;
//int main() {
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 7 == 0|| i / 10 == 7||i % 10 == 7)
//		{
//			cout << "敲桌子" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}



//乘法口诀表
#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}
	return 0;
}
