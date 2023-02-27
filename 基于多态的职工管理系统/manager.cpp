#pragma once
#include"manager.h"
using namespace std;

//构造函数
Manager::Manager(int num, string name, int work)
{
	this->m_num = num;
	this->m_name = name;
	this->m_work = work;
}

//显示个人信息
void Manager::getInfo()
{
	cout << "员工编号：" << this->m_num << "\t"
		<< "姓名：" << this->m_name << "\t"
		<< "岗位：" << "经理" << "\t"
		<< "职责：" << "管理员工，完成老板安排的任务" << endl;

}