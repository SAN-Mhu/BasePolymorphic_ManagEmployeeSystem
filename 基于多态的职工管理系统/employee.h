#pragma once
#include"worker.h"

class Employee:public Worker
{
public:
	Employee(int num, string name, int work);
	//��ʾ������Ϣ
	virtual void getInfo();

};

