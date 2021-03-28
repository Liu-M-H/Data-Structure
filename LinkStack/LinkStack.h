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

bool InitLinkStack(LinkStack& S);//链栈初始化
bool Push(LinkStack& S);//入栈
bool Pop(LinkStack& S, ElemType& e);//出栈
ElemType GetTop(LinkStack& S);//取栈顶元素
