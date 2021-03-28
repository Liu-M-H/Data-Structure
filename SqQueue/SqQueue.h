#pragma once
#include<iostream>
#include<string>
#define MaxSize 100
using namespace std;

typedef char ElemType;
//静态分配
//typedef struct SqQueue {
//	ElemType data[MaxSize];
//	int front, rear;
//}SqQueue;

//动态分配
typedef struct SqQueue {
	ElemType* base;
	int front, rear;
}SqQueue;

bool InitQueue(SqQueue& Q);//循环队列初始化
bool EnQueue(SqQueue& Q, ElemType e);//入队
bool DeQueue(SqQueue& Q, ElemType& e);//出队
bool GetHead(SqQueue& Q, ElemType& e);//取队头元素
int QueueLength(SqQueue& Q);//求队列长度

bool CreateQueue(SqQueue& Q);//创建一个队列
bool NotFull(SqQueue& Q);//判断是否队满
