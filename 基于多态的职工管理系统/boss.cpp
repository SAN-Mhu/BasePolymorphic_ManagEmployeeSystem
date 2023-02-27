#pragma once
#include"boss.h"
using namespace std;

//构造函数
Boss::Boss(int num, string name, int work)
{
	this->m_num = num;
	this->m_name = name;
	this->m_work = work;
}

//显示个人信息
void Boss::getInfo()
{
	cout << "员工编号：" << this->m_num << "\t"
		<< "姓名：" << this->m_name << "\t"
		<< "岗位：" << "老板" << "\t"
		<< "职责：" << "管理公司" << endl;

}