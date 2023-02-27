#include<iostream>
#include"WorkManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

using namespace std;

int main()
{
	WorkManager wm;
	int choice = 0;

	while (true)
	{
		wm.Showmenu();
		cout << "请选择要进行的操作：" << endl;
		cin >> choice;
		switch (choice)
		{
				//0.退出系统
			case 0:	
				wm.exitSystem();
				break;
				//1.添加职工系统
			case 1:
				wm.Add_Emp();
				break;
				//2.显示职工信息
			case 2:
				break;
				//3.删除离职员工
			case 3:
				break;
				//4.修改职工信息
			case 4:
				break;
				//5.查找职工信息
			case 5:
				break;
				//6.按照编号排序
			case 6:
				break;
				//7.情况所有文档
			case 7:
				break;
				//其他情况
			default:
			{
				cout << "无效选项，请重新输入！" << endl;
				system("pause");
			}
				break;
		}
		//每次操作结束后清屏
		system("cls");
	}

	system("pause");
	return 0;
}