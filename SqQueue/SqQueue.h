#pragma once
#include<iostream>
#include<string>
#define MaxSize 100
using namespace std;

typedef char ElemType;
//��̬����
//typedef struct SqQueue {
//	ElemType data[MaxSize];
//	int front, rear;
//}SqQueue;

//��̬����
typedef struct SqQueue {
	ElemType* base;
	int front, rear;
}SqQueue;

bool InitQueue(SqQueue& Q);//ѭ�����г�ʼ��
bool EnQueue(SqQueue& Q, ElemType e);//���
bool DeQueue(SqQueue& Q, ElemType& e);//����
bool GetHead(SqQueue& Q, ElemType& e);//ȡ��ͷԪ��
int QueueLength(SqQueue& Q);//����г���

bool CreateQueue(SqQueue& Q);//����һ������
bool NotFull(SqQueue& Q);//�ж��Ƿ����
