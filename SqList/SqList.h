#pragma once
#include<iostream>
#include<string>
using namespace std;

#define MAXSIZE 100 //×î´ó¿Õ¼ä

typedef int ElemType;

typedef struct {
	ElemType data[MAXSIZE];
	int length;
}SqList_S;

typedef struct {
	ElemType* elem;
	int length;	
}SqList;

bool InitList(SqList &L);
bool CreateList(SqList &L);
bool GetElem(SqList L, int i, ElemType e);
int LocateElem(SqList L, ElemType e);
bool InsertElem(SqList& L, ElemType e, int i);
bool DeleteElem(SqList& L, ElemType &e, int i);



