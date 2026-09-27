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
#include<limits>
using namespace std;

void ClearScreen()  //清屏指令
{
	cout<<"\033[2J\033[3J\033[1;1H"<<flush;
}

void WaitForEnter()   //暂停程序，使用户能够看清结果
{
	cout << "请按回车键返回菜单..." << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}

void ShowMenu()
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
//通讯人
struct person
{
	string Name;
	int Sex;//1男  2女
	int Age;//年龄
	string Phone;//电话
	string Addr;//住址
};
//通讯录
#define MAX 1000
struct Addressbooks
{
	struct person personArray[MAX];//保存的联系人数组
	int Size;//人员个数
};


//1，添加联系人
void AddPerson(Addressbooks* abs)
{
	if(abs->Size ==MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->Size].Name = name;

		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->Size].Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
		}

		int age = 0;
		cout << "请输入年龄：" << endl;
		while (1)
		{
			cin >> age;
			if (age > 0 && age < 150)
			{
				abs->personArray[abs->Size].Age = age;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
			
		}

		string phone;
		cout<<"请输入联系电话："<<endl;
		cin>>phone;
		abs->personArray[abs->Size].Phone = phone;
		
		string addr;
		cout<<"请输入家庭住址："<<endl;
		cin>>addr;
		abs->personArray[abs->Size].Addr = addr;

		abs->Size++;
		cout<<"添加成功"<<endl;

		//system("cls");//清屏,但vscode不兼容
		ClearScreen();//使用ANSI控制指令
	}
}


	//2.显示联系人
    void ShowPerson(Addressbooks* abs)
	{
		if(abs->Size ==0)
		{
			cout<<"当前记录为空"<<endl;
		}
		else
		{
			for(int i =0 ;i < abs->Size; i++)
			{
				cout<<"姓名:"<<abs->personArray[i].Name<<"\t";
				cout<<"性别:"<<(abs->personArray[i].Sex == 1 ?"男":"女")<<"\t";
				cout<<"年龄:"<<abs->personArray[i].Age<<"\t";
				cout<<"电话:"<<abs->personArray[i].Phone<<"\t";
				cout<<"住址:"<<abs->personArray[i].Addr<<endl;
				
			}
		}
		WaitForEnter();
		ClearScreen();
	}

//***
	//检测
	int isExist(Addressbooks*abs,string name)//本质：遍历通讯录中所以人名，看是否与传入的人名一致，存在则返回具体位置，不存在则返回-1
	{
		for(int i= 0; i<abs->Size ;i++)
		{
			if(abs->personArray[i].Name == name)
			{
				return i;//找到姓名，返回编号
			}
		}
		return -1;//没找到，返回-1
	}
	
	//3.删除联系人
	//删除
	void DeletePerson (Addressbooks*abs)
	{
		cout<<"请输入您要删除的联系人："<<endl;
		string name ;
		cin>>name;

		int ret = isExist(abs,name);
		if(ret !=-1)
		{
			for(int i = ret; i<abs->Size ;i++)
			{
				abs->personArray[i] = abs->personArray[i+1]; //数据前移
			}
			abs->Size--;  //更新通讯录中的人员数
			cout<<"删除成功"<<endl;
		}
		else
		{
			cout<<"查无此人"<<endl;
		}
		WaitForEnter();
        ClearScreen();
	}
	

	//4.查找联系人
	void FindPerson(Addressbooks*abs)
	{
		cout<<"请输入您要删除的联系人："<<endl;
		string name;
		cin>>name;

		int ret = isExist(abs,name);
		if(ret != -1)
		{
                cout<<"姓名："<<abs->personArray[ret].Name<<"\t";
		        cout<<"性别:"<<(abs->personArray[ret].Sex == 1 ?"男":"女")<<"\t";
				cout<<"年龄:"<<abs->personArray[ret].Age<<"\t";
				cout<<"电话:"<<abs->personArray[ret].Phone<<"\t";
				cout<<"住址:"<<abs->personArray[ret].Addr<<endl;
		}
		else
		{
        cout<<"查无此人"<<endl;
		}
		WaitForEnter();
        ClearScreen();
	}


    //5.修改联系人
	void ModifyPerson(Addressbooks*abs)
	{
		cout<<"请输入您要修改的联系人："<<endl;
		string name;
		cin >> name;

		int ret = isExist(abs,name);
		if(ret != -1)
		{
			string name;
			cout <<"请输入姓名："<<endl;
			cin>>name;
			abs->personArray[ret].Name = name;

	        int sex=0;
			cout <<"请输入性别："<<endl;
			cout << "1 --- 男" << endl;
		    cout << "2 --- 女" << endl;

			while (1)
			{
			    cin >> sex;
			    if(sex==1||sex==2)
			    {
			    abs->personArray[ret].Sex = sex;
			    break;
			    }
				cout <<"输入有误。请重新输入"<<endl;
			}

	        int age;
			cout <<"请输入年龄："<<endl;
			cin>>age;
			abs->personArray[ret].Age = age;

	        string phone;
			cout <<"请输入电话："<<endl;
			cin >> phone;
			abs->personArray[ret].Phone = phone;

	        string addr;
			cout <<"请输入住址："<<endl;
			cin>>addr;
			abs->personArray[ret].Addr = addr;

			cout <<"修改成功！"<<endl;
		}
		else
		{
			cout<<"查无此人"<<endl;
		}
		WaitForEnter();
        ClearScreen();
	}


    //6.清空联系人
	void CleanPerson(Addressbooks*abs)
	{
		abs->Size = 0;  //将联系人数量置为0，做逻辑清空操作
		cout<<"通讯录已清空"<<endl;
		WaitForEnter();
        ClearScreen();
	}


int main() {
	Addressbooks abs;
	abs.Size = 0;//当前为空

    int select = 0;
	while(1)
	{
		
		ShowMenu();
		cin>>select;
		switch(select)
	   {
		case 1:
			// 添加联系人
			AddPerson(&abs);//传入abs的地址
			break;
		case 2:
			// 显示联系人
            ShowPerson(&abs);
			break;
		case 3:
		//{
			// 删除联系人
			//试验检测功能
			// cout<<"请输入删除联系人姓名："<<endl;
			// string name;
			// cin>>name;

			// if(isExist(&abs,name)==-1)
			// {
			// 	cout<<"查无此人"<<endl;
			// }
			// else
			// {
			// 	cout<<"找到此人"<<endl;
			// }
		//}
		    DeletePerson(&abs);
			break;
		case 4:
			// 查找联系人
			FindPerson(&abs);
			break;
		case 5:
			// 修改联系人
			ModifyPerson(&abs);
			break;
		case 6:
			// 清空联系人
			CleanPerson(&abs);
			break;
		case 0:
			// 退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
		default:
			cout<<"输入有误，请重新输入"<<endl;
			break;
	    }
	}
	return 0;
}

