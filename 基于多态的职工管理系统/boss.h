#pragma once
#include"worker.h"
class Boss :public Worker
{
public:
	Boss(int num, string name, int work);
	//显示个人信息
	virtual void getInfo();
};
