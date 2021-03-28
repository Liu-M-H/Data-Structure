#include"LinkList.h"
int Length = 0;
//�������ʼ��
bool InitList(LinkList& L) {
	L = new Lnode;
	if (!L)
		return false;
	L->next = NULL;
	return true;
}

//ͷ�巨����
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
//β�巨����
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
//�����ȡֵ��ȡ��i������ֵ��
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
//����Ĳ���
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
//����Ĳ���(�ڵ�i��Ԫ��ǰ���룩
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
//�����ɾ����ɾ����i����㣩,������ɾ���Ľ��������򱣴���e��
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
		cout << "i������" << endl;
		return false;
	}
	s = p->next;
	e = s->data;
	p->next = s->next;
	Length --;
	delete s;
	return true;
}