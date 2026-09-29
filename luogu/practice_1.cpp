//#include<iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << a * b << endl;
//
//	return 0;
//}

//字母大小写转换
//#include<iostream>
//using namespace std;
//int main() {
//	char a;
//	cin >> a;
//	a = a - 32;
//	cout << a << endl;
//	return 0;
//}

//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main() {
//	double t;
//	int n;
//	cin >> t >> n;
//	printf("%.3f\n", t / n);
//	cout<< 2 * n << endl;
//	return 0;
//}//混合
//#include<iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//	double t;
//	int n;
//	cin >> t >> n;
//	printf("%.3f\n", t / n);
//	printf("%d/n", 2 * n);
//	return 0;
//}//纯C


//#include<iostream>
//using namespace std;
//int main()
//{
//	int x;
//    cin >> x;
//	bool p1 = (x % 2 == 0);
//	bool p2 = (x > 4 && x <= 12);
//	bool A = (p1 && p2);
//	bool Uim = (p1 || p2);
//	bool B = (p1 != p2);
//	bool zheng = (!p1 && !p2);
//	cout << A << " " << Uim << " " << B << " " << zheng << endl;
//	return 0;
//} 

//#include<iostream>
//using namespace std;
//int main() {
//	int min = 1001;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		if (x < min)
//		{
//			min = x;
//		}
//	}
//	cout << min << endl;
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int x;
//	cin >> x;
//	if (x <= 150)
//	{
//		cout << fixed << setprecision(1) << x * 0.4463 << endl;
//	}
//	else if (x > 150 && x <= 400)
//	{
//		cout << fixed << setprecision(1) << (x - 150) * 0.4663 + 150 * 0.4463 << endl;
//	}
//	else if (x > 400&&x<=10000)
//	{
//		cout << fixed << setprecision(1) << 250 * 0.4663 + 150 * 0.4463 + (x - 400) * 0.5663 << endl;
//	}
//	else
//	{
//		return 0;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	unsigned int A, B, C;
//	cin >> A >> B >> C;
//	if (A <= 100 && B <= 100 && C <= 100)
//	{
//		cout << A * 0.2 + B * 0.3 + C * 0.5 << endl;
//	}
//	else
//	{
//		return 0;
//	}
//	return 0;    //具有浮点数隐患，且逻辑冗余，效率低
//}
//改进
//#include<iostream>
//using namespace std;
//int main()
//{
//	int A, B, C;
//	cin >> A >> B >> C;
//	cout << (A * 2 + B * 3 + C * 5) / 10 << '\n';
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	bool x = (n % 400 == 0 )||( n % 4 == 0 && n % 100!=0);//不能表达为n%00==!0，因为”!0“代表1，用不等于“!=”即可
//	cout << x << '\n';
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	if (x > 1)
//	{
//		cout << "Today, I ate " << x << " apples." << '\n';
//	}
//	else
//	{
//		cout << "Today, I ate " << x << " apple." << '\n';
//	}
//	return 0;
//}  //输出语句的题目要逐字校对


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (5 * n < 11 + 3 * n)
//	{
//		cout << "Local" << '\n';
//	}
//	else
//	{
//		cout << "Luogu" <<'\n';
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	double m, h;
//	cin >> m >> h;
//	double bmi = m /(h * h);
//	if (bmi<18.5)
//	{
//		cout <<  "Underweight" << '\n';
//	}
//	else if ( bmi < 24)  //因为前面已经排除小于18.5的情况，所以无需bmi >= 18.5 && bmi < 24
//	{
//		cout << "Normal" << '\n';
//	}
//	else
//	{
//		cout <<bmi << '\n' << "Overweight" << '\n';
//	}
//	return 0;
//}


//#include<iostream>                                                    // *************
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int x[10005];
//	int A[5005], B[5005];
//	int num1 = 0, num2 = 0;
//	int n, k;
//	cin >> n >> k;
//	for (int i = 2;i<n;i++)
//	{
//		if (i % k == 0)
//		{
//			A[num1++] = x[i];
//		}
//		else
//		{
//			B[num2++] = x[i];
//		}		
//	}
//	int average_A = 0;
//
//	for (int i = 2; i < num1; i++)
//	{
//		average_A += num1;
//	}
//	int average_B = 0;
//	for (int i = 2; i < num2; i++)
//	{
//		average_B += num2;
//	}
//
//	cout << fixed<<setprecision(1)<<average_A /num1<< "  " << average_B/num2 << '\n';
//	return 0;
//}
//核心错误
/*1. 数组 x 未初始化：x[i] 里面全是内存垃圾值，不能赋值给 A、B 数组。而且完全没必要存数组，直接累加 i 即可。
2. 循环范围错误：for(int i = 2; i < n; i++) 漏掉了 1 和 n，应改为 i = 1; i <= n; i++。
	3. 求和逻辑荒谬：写的是 average_A += num1; ，这是在把“个数”累加。应该是把数值 A[i] 累加。
	4. 整数除法陷阱：average_A / num1 是两个 int 相除，会直接丢弃小数部分，setprecision 根本救不回来,
	必须写成(double)average_A / num1。*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	long long sumA = 0, sumB = 0; // 存储总和，防止溢出
	int num1 = 0, num2 = 0;       // 存储个数

	// 直接遍历 1 到 n，无需数组
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			sumA += i;
			num1++;
		}
		else {
			sumB += i;
			num2++;
		}
	}

	// 注意强制转换为 double，否则整数相除会丢失精度
	cout << fixed << setprecision(1)
		<< (double)sumA / num1 << " "
		<< (double)sumB / num2 << '\n';

	return 0;
}