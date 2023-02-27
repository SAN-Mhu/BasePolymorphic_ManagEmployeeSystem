#pragma once
#include<iostream>
#include<string>

using namespace std;

class Worker
{
public:
	//显示职工信息
	virtual  void getInfo()=0;

	//职工编号
	int m_num;
	//职工姓名
	string m_name;
	//岗位
	int m_work;
};