#include"LinkList.h"
int Length = 0;
//单链表初始化
bool InitList(LinkList& L) {
	L = new Lnode;
	if (!L)
		return false;
	L->next = NULL;
	return true;
}

//头插法创建
void CreateList_H(LinkList& L) {
	ElemType e;
	LinkList s;
	while (cin >> e)
	{
		s = new Lnode;
		s->data = e;
		s->next = L->next;
		L->next = s;
		++Length;
	}
}
//尾插法创建
void CreateList_T(LinkList& L) {
	ElemType e;
	LinkList s,r;
	r = L;
	while (cin >> e)
	{
		s = new Lnode;
		s->data = e;
		s->next = r->next;
		r->next = s;
		r = s;
		++Length;
	}
}
//链表的取值（取第i个结点的值）
bool GetElem(LinkList L, ElemType& e, int i) {
	if (i<1 || i>Length)
		return false;
	LinkList p;
	p = L;
	for (int t = 1; t <= i; ++t)
		p = p->next;
	e = p->data;
	return true;
}
//链表的查找
bool LocateElem(LinkList L, ElemType e, int &i) {
	LinkList p;
	int count = 1;
	p = L->next;
	while (p && p->data != e)
	{
		p = p->next;
		++count;
	}
	if (!p)
		return false;
	i = count;
	return true;

}
//链表的插入(在第i个元素前插入）
bool InsertElem(LinkList& L, ElemType e, int i) {
	LinkList s, p;
	int j = 1;
	p = L->next;
	while (p && j < i - 1) 
	{
		p = p->next;
		++j;
	}
	if (!p)
		return false;
	s = new Lnode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	++Length;
	return true;
}
//链表的删除（删除第i个结点）,并将所删除的结点的数据域保存在e中
bool DeleteElem(LinkList& L, ElemType &e, int i) {
	LinkList s, p;
	p = L->next;
	int j = 1;
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!p->next)
	{
		cout << "i不合理" << endl;
		return false;
	}
	s = p->next;
	e = s->data;
	p->next = s->next;
	Length --;
	delete s;
	return true;
}