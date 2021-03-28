#include"SqQueue.h"
//ѭ�����г�ʼ��
bool InitQueue(SqQueue& Q)
{
	Q.base = new ElemType[MaxSize];
	if (!Q.base)
		return false;
	Q.front = Q.rear = 0;
	return true;
}
//���
bool EnQueue(SqQueue& Q, ElemType e)
{
	if ((Q.rear + 1) % MaxSize == Q.front)
		return false//����
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}
//����
bool SqQueue(SqQueue& Q, ElemType& e)
{
	if (Q.rear == Q.front)
		return false;//�ӿ�
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
//ȡ��ͷԪ��
bool GetHead(SqQueue& Q, ElemType& e)
{
	if (Q.rear == Q.front)
		return false;
	e = Q.base[Q.front];
	return true;
}
//����г���
int QueueLength(SqQueue& Q)
{
	return (Q.rear - Q.front + MaxSize) % MaxSize;
}
//�ж��Ƿ����
//bool NotFull(SqQueue& Q)
//{
//	if ((Q.rear + 1) % MaxSize == Q.front)
//		return false;
//	return true;
//}

//����һ������
bool CreateQueue(SqQueue& Q)
{
	ElemType e;
	while (cin >> e)
		EnQueue(Q, e);
	return true;
}