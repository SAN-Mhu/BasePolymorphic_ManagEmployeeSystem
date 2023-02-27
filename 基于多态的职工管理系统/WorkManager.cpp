#pragma once	//��ֹͷ�ļ��ظ�����
#include"WorkManager.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

//���캯��
WorkManager::WorkManager() 
{
	//��ʼ������ָ��
	this->m_array = NULL;
	//��ʼ������
	m_length = 0;
}
//��������
WorkManager::~WorkManager()
{
	//�ͷŶ������ݣ������ڴ�й¶
	if (this->m_array != NULL)
	{
		delete[] this->m_array;
		m_array = NULL;
	}
}

//չʾ�˵�
void WorkManager::Showmenu()
{
	cout << "*************************************************" << endl;
	cout << "******        ��ӭʹ��ְ������ϵͳ   **********" << endl;
	cout << "************     0.�˳��������     ************" << endl;
	cout << "************     1.���ְ����Ϣ     ************" << endl;
	cout << "************     2.��ʾְ����Ϣ     ************" << endl;
	cout << "************     3.ɾ����ְԱ��     ************" << endl;
	cout << "************     4.�޸�ְ����Ϣ     ************" << endl;
	cout << "************     5.����ְ����Ϣ     ************" << endl;
	cout << "************     6.���ձ������     ************" << endl;
	cout << "************     7.��������ĵ�     ************" << endl;
	cout << "*************************************************" << endl;
	cout << endl;
}

//0.�˳�ϵͳ
void WorkManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
	
}
//1.���ְ��

void WorkManager::Add_Emp()
{
	int addNum=0;//Ҫ���ְ��������
	cout << "������Ҫ���ְ����������" << endl;
	cin >> addNum;

	if (addNum > 0)
	{
		//��ʼ�����¿ռ��С
		int newSize = this->m_length + addNum;
		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];
		//��ԭ�ռ������ݴ���¿ռ���
		if (this->m_array != NULL)
		{
			for (int i = 0; i < this->m_length; i++)
			{
				newSpace[i] = this->m_array[i];
			}
		}

		//����������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int depid;
			cout << "�������" << i + 1 << "����ְ�����" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ:" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> depid;

			Worker* c_worker = NULL;
			switch (depid)
			{
			case 1://��ְͨ��
				c_worker = new Employee(id, name, 1);
				break;
			case 2://����
				c_worker = new Manager(id, name, 2);
				break;
			case 3://�ϰ�
				c_worker = new Boss(id, name, 3);
				break;
			default:
				cout << "��Чѡ�������ѡ��" << endl;
				break;
			}
			//������������洢��ָ�������ڣ�
			newSpace[this->m_length + i] = c_worker;
		}
		//�ͷ�ԭ�пռ�
		delete[] this->m_array;
		//����������ָ��ָ���¿��ٵĿռ�
		this->m_array = newSpace;
		//����ְ������
		this->m_length=newSize;

		//��ʾ��Ϣ
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
	
	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");

}





