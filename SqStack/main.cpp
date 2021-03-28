#include"SqStack.h"
extern int Length;
int main()
{
	SqStack S;
	ElemType e;
	ElemType* p;
	InitSqStack(S);
	Push(S);
	for (p = S.base; p != S.top; ++p)
		cout << *p;
	cout << endl;
	Pop(S, e);
	cout << e << endl;
	for (p = S.base; p != S.top; ++p)
		cout << *p;
	cout << endl;
	return 0;
}