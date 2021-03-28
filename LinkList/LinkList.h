#pragma once
#include<iostream>
#include<string>
using namespace std;
typedef int ElemType;

typedef struct Lnode {
	ElemType data;
	struct Lnode* next;
}Lnode,*LinkList;

bool InitList(LinkList& L);
void CreateList_H(LinkList& L);
void CreateList_T(LinkList& L);
bool GetElem(LinkList L, ElemType& e, int i);
bool LocateElem(LinkList L, ElemType e, int& i);
bool InsertElem(LinkList& L, ElemType e, int i);
bool DeleteElem(LinkList& L, ElemType &e, int i);

