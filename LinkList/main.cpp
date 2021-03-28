#include"LinkList.h"
extern int Length;
ElemType i;
int t;
int main() {
	LinkList L;
	InitList(L);
	CreateList_T (L);
	cout << Length << endl;
	//LinkList s;
	//s = L->next;
	//while (s) 
	//{	
	//	cout << s->data << endl;
	//	s = s->next;
	//}
	//GetElem(L, i, 2);
	//LocateElem(L, 3, t);
	//InsertElem(L, 1000, 4);
	DeleteElem(L, i, 3);
	cout << i << "," << Length << endl;
	LinkList s;
	s = L->next;
	while (s) 
	{	
		cout << s->data << endl;
		s = s->next;
	}
}