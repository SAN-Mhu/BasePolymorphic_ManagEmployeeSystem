#pragma once	//防止头文件重复
#include<iostream>	
#include<string>
#include"worker.h"

using namespace std;

//创建菜单管理类
class WorkManager
{
public:
	//构造函数
	WorkManager();
	//展示菜单函数 
	void Showmenu();
	//0.退出系统
	void exitSystem();
	void Add_Emp();

	//析构函数
	~WorkManager();
	
	//职工人数
	int m_length;
	//职工数组指针
	Worker** m_array;

};