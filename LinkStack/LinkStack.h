#pragma once
#include<iostream>
#include<string>
using namespace std;

typedef char ElemType;

typedef struct Snode 
{
	ElemType data;
	struct Snode *next;
}Snode,*LinkStack;

bool InitLinkStack(LinkStack& S);//��ջ��ʼ��
bool Push(LinkStack& S);//��ջ
bool Pop(LinkStack& S, ElemType& e);//��ջ
ElemType GetTop(LinkStack& S);//ȡջ��Ԫ��
