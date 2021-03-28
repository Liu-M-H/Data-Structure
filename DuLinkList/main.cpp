#include"DuLinkList.h"
extern int Length;
int main() {
	DuLinkList L;
	ElemType e;
	InitDuLinkList(L);
	//CreateDuLinkList_H(L);
	CreateDuLinkList_T(L);
	//InsertElem(L, 1000, 5);
	DeleteElem(L, e, 3);
	cout << "Length:" << Length << endl;
	DuLinkList s;
	s = L->next;
	while (s)
	{
		cout << s->data << endl;
		s = s->next;
	}
}