#pragma once
#include<iostream>
#include<string>

using namespace std;

class Worker
{
public:
	//��ʾְ����Ϣ
	virtual  void getInfo()=0;

	//ְ�����
	int m_num;
	//ְ������
	string m_name;
	//��λ
	int m_work;
};