#include"AddressBook.h"

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

