//#include<iostream>
//using namespace std;
//void showmenu()
//{
//	cout << "****************************" << endl;
//	cout << "*****   1.添加联系人   *****" << endl;
//	cout << "*****   2.显示联系人   *****" << endl;
//	cout << "*****   3.删除联系人   *****" << endl;
//	cout << "*****   4.查找联系人   *****" << endl;
//	cout << "*****   5.修改联系人   *****" << endl;
//	cout << "*****   6.清空联系人   *****" << endl;
//	cout << "*****   0.退出通讯录   *****" << endl;
//	cout << "****************************" << endl;
//}
//
//int main() {
//	showmenu();
//
//	return 0;
//}


#include<iostream>
#include<string>
using namespace std;
void Showmenu()
{
	string items[] = {
		"1.添加联系人",
		"2.显示联系人",
		"3.删除联系人",
		"4.查找联系人",
		"5.修改联系人",
		"6.清空联系人",
		"0.退出通讯录"
	};
	string a = "****************************";
		cout << a << endl;
		
		int len = sizeof(items) / sizeof(items[0]);
		for (int i =0; i<len;i++)
		{
			cout << "*****   " << items[i] << "   *****"<<endl;
		}
		cout << a << endl;
}
int main() {
	Showmenu();
	return 0;
}