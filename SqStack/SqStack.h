#pragma once
#include<iostream>
#include<string>
#define MaxSize 100
using namespace std;

typedef char ElemType;
//静态分配
//typedef struct SqStack {
//	ElemType data[MaxSize];
//	int top;
//}SqStack;

//动态分配
typedef struct SqStack {
	ElemType* base, * top;
}SqStack;

bool InitSqStack(SqStack& S);//顺序栈初始化
bool Push(SqStack& S);//入栈
bool Pop(SqStack& S, ElemType &e);//出栈
ElemType GetTop(SqStack& S);//取栈顶元素