#pragma once
#include<iostream>
#include<string>
using namespace std;

typedef int ElemType;

typedef struct DuLnode {
	ElemType data;
	struct DuLnode* prior, * next;
}DuLnode,*DuLinkList;

bool InitDuLinkList(DuLinkList& L);//�����ʼ��
bool CreateDuLinkList_H(DuLinkList& L);//ͷ�巨����˫������
bool CreateDuLinkList_T(DuLinkList& L);//β�巨����˫������
bool GetElem(DuLinkList L, ElemType& e, int i);//�����ȡֵ��ȡ��i������ֵ��
bool LocateElem(DuLinkList L, ElemType e, int& i);//����Ĳ���
bool InsertElem(DuLinkList& L, ElemType e, int i);//����Ĳ��루�ڵ�i�����ǰ����һ��Ԫ�أ�
bool DeleteElem(DuLinkList& L, ElemType& e, int i);//�����ɾ����ɾ����i����㣩