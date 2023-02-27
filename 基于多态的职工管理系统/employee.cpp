#pragma once
#include"employee.h"
using namespace std;

//构造函数
Employee::Employee(int num, string name, int work)
{
	this->m_num = num;
	this->m_name = name;
	this->m_work = work;
}

//显示个人信息
void Employee::getInfo()
{
	cout << "员工编号：" << this->m_num << "\t"
		<< "姓名：" << this->m_name << "\t"
		<< "岗位：" << "普通员工" << "\t"
		<< "职责：" << "完成经理要求的任务" << endl;

}