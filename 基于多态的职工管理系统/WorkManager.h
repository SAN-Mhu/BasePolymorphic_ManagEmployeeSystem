#pragma once	//��ֹͷ�ļ��ظ�
#include<iostream>	
#include<string>
#include"worker.h"

using namespace std;

//�����˵�������
class WorkManager
{
public:
	//���캯��
	WorkManager();
	//չʾ�˵����� 
	void Showmenu();
	//0.�˳�ϵͳ
	void exitSystem();
	void Add_Emp();

	//��������
	~WorkManager();
	
	//ְ������
	int m_length;
	//ְ������ָ��
	Worker** m_array;

};