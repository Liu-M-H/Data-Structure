#include"SqQueue.h"
//循环队列初始化
bool InitQueue(SqQueue& Q)
{
	Q.base = new ElemType[MaxSize];
	if (!Q.base)
		return false;
	Q.front = Q.rear = 0;
	return true;
}
//入队
bool EnQueue(SqQueue& Q, ElemType e)
{
	if ((Q.rear + 1) % MaxSize == Q.front)
		return false//队满
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}
//出队
bool SqQueue(SqQueue& Q, ElemType& e)
{
	if (Q.rear == Q.front)
		return false;//队空
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
//取队头元素
bool GetHead(SqQueue& Q, ElemType& e)
{
	if (Q.rear == Q.front)
		return false;
	e = Q.base[Q.front];
	return true;
}
//求队列长度
int QueueLength(SqQueue& Q)
{
	return (Q.rear - Q.front + MaxSize) % MaxSize;
}
//判断是否队满
//bool NotFull(SqQueue& Q)
//{
//	if ((Q.rear + 1) % MaxSize == Q.front)
//		return false;
//	return true;
//}

//创建一个队列
bool CreateQueue(SqQueue& Q)
{
	ElemType e;
	while (cin >> e)
		EnQueue(Q, e);
	return true;
}