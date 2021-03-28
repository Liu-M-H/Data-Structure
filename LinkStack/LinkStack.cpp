#include"LinkStack.h"
int Length = 0;
//Á´Õ»³õÊ¼»¯
bool InitLinkStack(LinkStack& S)
{
	S = NULL;
	return true;
}
//ÈëÕ»
bool Push(LinkStack& S)
{
	ElemType e;
	LinkStack p;
	while (cin >> e)
	{
		p = new Snode;
		p->data = e;
		p->next = S;
		S = p;
	}
	return true;
}
//³öÕ»
bool Pop(LinkStack& S, ElemType& e)
{
	if (S == NULL)
		return false;
	LinkStack p;
	e = S->data;
	p = S;
	S = S->next;
	delete p;
	return true;
}
//È¡Õ»¶¥ÔªËØ
ElemType GetTop(LinkStack& S)
{
	if (S == NULL)
		return 0;
	return S->data;
}