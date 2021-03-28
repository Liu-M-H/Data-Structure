#pragma once
#include<iostream>
#include<string>
using namespace std;

typedef int ElemType;

typedef struct DuLnode {
	ElemType data;
	struct DuLnode* prior, * next;
}DuLnode,*DuLinkList;

bool InitDuLinkList(DuLinkList& L);//链表初始化
bool CreateDuLinkList_H(DuLinkList& L);//头插法创建双向链表
bool CreateDuLinkList_T(DuLinkList& L);//尾插法创建双向链表
bool GetElem(DuLinkList L, ElemType& e, int i);//链表的取值（取第i个结点的值）
bool LocateElem(DuLinkList L, ElemType e, int& i);//链表的查找
bool InsertElem(DuLinkList& L, ElemType e, int i);//链表的插入（在第i个结点前插入一个元素）
bool DeleteElem(DuLinkList& L, ElemType& e, int i);//链表的删除（删除第i个结点）