#include"SqStack.h"
int Length = 0;
//顺序栈初始化
bool InitSqStack(SqStack& S)
{
	S.base = new ElemType [MaxSize];
	if (!S.base)
		return false;
	S.top = S.base;
	return true;
}
//入栈
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
//出栈
bool Pop(SqStack& S, ElemType &e)
{
	if (S.base == S.top)
		return false;
	e = *--S.top;
	--Length;
	return true;
} 
//取栈顶元素
ElemType GetTop(SqStack& S)
{
	if (S.base == S.top)
		return 0;
	return *(S.top - 1);
}