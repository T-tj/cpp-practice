#pragma once
#include<iostream>
#include<string>
#include<limits>
using namespace std;

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
void ClearScreen();
void WaitForEnter();
void ShowMenu();
void AddPerson(Addressbooks* abs);
void ShowPerson(Addressbooks* abs);
int isExist(Addressbooks* abs, string name);
void DeletePerson(Addressbooks* abs);
void FindPerson(Addressbooks* abs);
void ModifyPerson(Addressbooks* abs);
void CleanPerson(Addressbooks* abs);