#pragma once
#include"employee.h"
using namespace std;

//���캯��
Employee::Employee(int num, string name, int work)
{
	this->m_num = num;
	this->m_name = name;
	this->m_work = work;
}

//��ʾ������Ϣ
void Employee::getInfo()
{
	cout << "Ա����ţ�" << this->m_num << "\t"
		<< "������" << this->m_name << "\t"
		<< "��λ��" << "��ͨԱ��" << "\t"
		<< "ְ��" << "��ɾ���Ҫ�������" << endl;

}