#pragma once
#include"worker.h"

class Employee:public Worker
{
public:
	Employee(int num, string name, int work);
	//显示个人信息
	virtual void getInfo();

};

