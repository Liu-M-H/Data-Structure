#include"DuLinkList.h"
int Length = 0;
//双向链表初始化
bool InitDuLinkList(DuLinkList& L) {
	L = new DuLnode;
	if (!L)
		return false;
	L->prior = L->next = NULL;
	return true;
}
//头插法创建双向链表
bool CreateDuLinkList_H(DuLinkList& L) {
	DuLinkList s;
	ElemType e;
	while (cin >> e)
	{
		s = new DuLnode;
		s->data = e;
		if (L->next)
			L->next->prior = s;
		s->next = L->next;
		s->prior = L;
		L->next = s;
		++Length;
	}
	return true;
}
//尾插法创建双向链表
bool CreateDuLinkList_T(DuLinkList& L) {
	DuLinkList s, r;
	ElemType e;
	r = L;
	while (cin >> e) 
	{
		s = new DuLnode;
		s->data = e;
		s->next = r->next;
		s->prior = r;
		r->next = s;
		r = s;
		++Length;
	}
	return true;
}
//链表的取值（取第i个结点的值）
bool GetElem(DuLinkList L, ElemType& e, int i) {
	if (i<1 || i>Length)
		return false;
	DuLinkList p;
	p = L;
	for (int t = 1; t <= i; ++t)
		p = p->next;
	e = p->data;
	return true;
}
//链表的查找
bool LocateElem(DuLinkList L, ElemType e, int& i) {
	DuLinkList p;
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
//链表的插入（在第i个元素前插入）
bool InsertElem(DuLinkList& L, ElemType e, int i) {
	DuLinkList s,p;
	int j = 1;
	p = L->next;
	while (p && j < i) {
		p = p->next;
		++j;
	}
	if (!p)
		return false;
	s = new DuLnode;
	s->data = e;
	p->prior->next = s;
	s->prior = p->prior;
	s->next = p;
	p->prior = s;
	++Length;
	return true;

}
//链表的删除（删除第i个结点）
bool DeleteElem(DuLinkList& L, ElemType& e, int i)
{
	DuLinkList p;
	int t = 1;
	p = L->next;
	while (p && t < i)
	{
		p = p->next;
		++t;
	}
	if (!p)
		return false;

	if (p->next)
		p->next->prior = p->prior;
	p->prior->next = p->next;
	--Length;
	return true;

}