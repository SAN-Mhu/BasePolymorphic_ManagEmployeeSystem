#pragma once
#include"worker.h"
class Boss :public Worker
{
public:
	Boss(int num, string name, int work);
	//��ʾ������Ϣ
	virtual void getInfo();
};
