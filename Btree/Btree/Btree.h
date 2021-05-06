#pragma once
#include<iostream>
#include<algorithm>

using namespace std;
typedef int ElemType;

//����һ��������������������ʽ��
typedef struct Bnode {
	ElemType data;
	struct Bnode * lchild, * rchild;
}Bnode,*Btree;

//����һ������������
typedef struct BTnode {
	ElemType data;
	struct BTnode* lchild, * rchild;
	bool ltag, rtag;
}BTNode,*BTtree;

void CreateBtree_XW(Btree& T);//ѯ�ʷ�����������
void CreateBtree_BK(Btree& T);//���շ�����������

void preorder(Btree T);//�������
void inorder(Btree T);//�������
void posorder(Btree T);//�������



