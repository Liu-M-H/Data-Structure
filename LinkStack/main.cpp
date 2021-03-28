#include"LinkStack.h"
extern int Length;
int main() {
	LinkStack S;
	InitLinkStack(S);
	Push(S);
	for (LinkStack p = S; p != NULL; p = p->next)
		cout << p->data << endl;
	return 0;
}