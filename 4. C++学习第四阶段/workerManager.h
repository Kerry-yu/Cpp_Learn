#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include "worker.h"
using namespace std;
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//ͳ���ļ�������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ����	���ڷ���ְ�����������λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Search_Emp();

	//����ְ���������
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();

public:
	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;
};

