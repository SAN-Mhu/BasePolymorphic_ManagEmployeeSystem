#pragma once
#include"manager.h"
using namespace std;

//���캯��
Manager::Manager(int num, string name, int work)
{
	this->m_num = num;
	this->m_name = name;
	this->m_work = work;
}

//��ʾ������Ϣ
void Manager::getInfo()
{
	cout << "Ա����ţ�" << this->m_num << "\t"
		<< "������" << this->m_name << "\t"
		<< "��λ��" << "����" << "\t"
		<< "ְ��" << "����Ա��������ϰ尲�ŵ�����" << endl;

}