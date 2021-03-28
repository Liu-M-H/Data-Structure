#include"SqStack.h"
int Length = 0;
//˳��ջ��ʼ��
bool InitSqStack(SqStack& S)
{
	S.base = new ElemType [MaxSize];
	if (!S.base)
		return false;
	S.top = S.base;
	return true;
}
//��ջ
bool Push(SqStack& S)
{
	ElemType e;
	while (cin >> e)
	{
		*S.top++ = e;
		++Length;
	}
	return true;
}
//��ջ
bool Pop(SqStack& S, ElemType &e)
{
	if (S.base == S.top)
		return false;
	e = *--S.top;
	--Length;
	return true;
} 
//ȡջ��Ԫ��
ElemType GetTop(SqStack& S)
{
	if (S.base == S.top)
		return 0;
	return *(S.top - 1);
}