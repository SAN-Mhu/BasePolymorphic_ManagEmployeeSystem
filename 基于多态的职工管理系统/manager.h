#pragma once
#include"worker.h"
class Manager :public Worker
{
public:
	Manager(int num, string name, int work);
	//��ʾ������Ϣ
	virtual void getInfo();
};
