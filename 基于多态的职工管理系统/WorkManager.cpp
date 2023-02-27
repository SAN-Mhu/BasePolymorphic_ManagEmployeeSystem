#pragma once	//防止头文件重复包含
#include"WorkManager.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

//构造函数
WorkManager::WorkManager() 
{
	//初始化数组指针
	this->m_array = NULL;
	//初始化人数
	m_length = 0;
}
//析构函数
WorkManager::~WorkManager()
{
	//释放堆区数据，避免内存泄露
	if (this->m_array != NULL)
	{
		delete[] this->m_array;
		m_array = NULL;
	}
}

//展示菜单
void WorkManager::Showmenu()
{
	cout << "*************************************************" << endl;
	cout << "******        欢迎使用职工管理系统   **********" << endl;
	cout << "************     0.退出管理程序     ************" << endl;
	cout << "************     1.添加职工信息     ************" << endl;
	cout << "************     2.显示职工信息     ************" << endl;
	cout << "************     3.删除离职员工     ************" << endl;
	cout << "************     4.修改职工信息     ************" << endl;
	cout << "************     5.查找职工信息     ************" << endl;
	cout << "************     6.按照编号排序     ************" << endl;
	cout << "************     7.清空所有文档     ************" << endl;
	cout << "*************************************************" << endl;
	cout << endl;
}

//0.退出系统
void WorkManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
	
}
//1.添加职工

void WorkManager::Add_Emp()
{
	int addNum=0;//要添加职工的数量
	cout << "请输入要添加职工的数量：" << endl;
	cin >> addNum;

	if (addNum > 0)
	{
		//开始计算新空间大小
		int newSize = this->m_length + addNum;
		//开辟新空间
		Worker** newSpace = new Worker * [newSize];
		//将原空间下内容存放新空间下
		if (this->m_array != NULL)
		{
			for (int i = 0; i < this->m_length; i++)
			{
				newSpace[i] = this->m_array[i];
			}
		}

		//输入新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int depid;
			cout << "请输入第" << i + 1 << "个新职工编号" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名" << endl;
			cin >> name;

			cout << "请选择该职工的岗位:" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> depid;

			Worker* c_worker = NULL;
			switch (depid)
			{
			case 1://普通职工
				c_worker = new Employee(id, name, 1);
				break;
			case 2://经理
				c_worker = new Manager(id, name, 2);
				break;
			case 3://老板
				c_worker = new Boss(id, name, 3);
				break;
			default:
				cout << "无效选项，请重新选择" << endl;
				break;
			}
			//将创建的子类存储到指针数组内；
			newSpace[this->m_length + i] = c_worker;
		}
		//释放原有空间
		delete[] this->m_array;
		//将管理数组指针指向新开辟的空间
		this->m_array = newSpace;
		//更新职工个数
		this->m_length=newSize;

		//提示信息
		cout << "成功添加" << addNum << "名新职工" << endl;
	
	}
	else
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");

}





