#pragma once
#include"boss.h"
using namespace std;

//���캯��
Boss::Boss(int num, string name, int work)
{
	this->m_num = num;
	this->m_name = name;
	this->m_work = work;
}

//��ʾ������Ϣ
void Boss::getInfo()
{
	cout << "Ա����ţ�" << this->m_num << "\t"
		<< "������" << this->m_name << "\t"
		<< "��λ��" << "�ϰ�" << "\t"
		<< "ְ��" << "����˾" << endl;

}