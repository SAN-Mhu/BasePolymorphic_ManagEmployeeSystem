#include<iostream>
#include"WorkManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

using namespace std;

int main()
{
	WorkManager wm;
	int choice = 0;

	while (true)
	{
		wm.Showmenu();
		cout << "��ѡ��Ҫ���еĲ�����" << endl;
		cin >> choice;
		switch (choice)
		{
				//0.�˳�ϵͳ
			case 0:	
				wm.exitSystem();
				break;
				//1.���ְ��ϵͳ
			case 1:
				wm.Add_Emp();
				break;
				//2.��ʾְ����Ϣ
			case 2:
				break;
				//3.ɾ����ְԱ��
			case 3:
				break;
				//4.�޸�ְ����Ϣ
			case 4:
				break;
				//5.����ְ����Ϣ
			case 5:
				break;
				//6.���ձ������
			case 6:
				break;
				//7.��������ĵ�
			case 7:
				break;
				//�������
			default:
			{
				cout << "��Чѡ����������룡" << endl;
				system("pause");
			}
				break;
		}
		//ÿ�β�������������
		system("cls");
	}

	system("pause");
	return 0;
}