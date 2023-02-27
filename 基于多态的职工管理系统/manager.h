#pragma once
#include"worker.h"
class Manager :public Worker
{
public:
	Manager(int num, string name, int work);
	//显示个人信息
	virtual void getInfo();
};
