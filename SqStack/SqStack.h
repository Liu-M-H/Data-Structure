#pragma once
#include<iostream>
#include<string>
#define MaxSize 100
using namespace std;

typedef char ElemType;
//��̬����
//typedef struct SqStack {
//	ElemType data[MaxSize];
//	int top;
//}SqStack;

//��̬����
typedef struct SqStack {
	ElemType* base, * top;
}SqStack;

bool InitSqStack(SqStack& S);//˳��ջ��ʼ��
bool Push(SqStack& S);//��ջ
bool Pop(SqStack& S, ElemType &e);//��ջ
ElemType GetTop(SqStack& S);//ȡջ��Ԫ��