#include"SqList.h"
//��ʼ���б�
bool InitList(SqList& L) {
	L.elem  = new ElemType[MAXSIZE];

	if (L.elem == NULL)
		return false;
	L.length = 0;
	return true;
}
//�����б�
bool CreateList(SqList& L) {
	ElemType i;
	int t = 0;
	while (cin >> i ) {
		if (L.length == MAXSIZE)
		{
			cout << "˳���������" << endl;
			return false;
		}
		L.elem[t++] = i;
		++L.length;
	}
	return true;
}
//���б���ȡֵ
bool GetElem(SqList L, int i, ElemType e) {
	if (i<1 || i>L.length)
		return false;
	e = L.elem[i - 1];
	return true;
}
//����
int LocateList(SqList L, ElemType e) {
	for (int i = 0; i < L.length; ++i)
		if (L.elem[i] == e)
			return i + 1;
	cout << "˳������޸�Ԫ�أ�";
	return -1;
}
//��˳���ĵ�i��Ԫ��ǰ����һ��Ԫ�ػ���ĩβ����һ��Ԫ��
bool InsertList(SqList& L, ElemType e, int i) {
	if (i < 1 || i > L.length + 1)
	{
		cout << "i��ֵ������";
		return false;
	}
	if (L.length == MAXSIZE)
	{
		cout << "˳���������";
		return false;
	}
	for (int t = L.length - 1; t >= i - 1; ++t)
		L.elem[t + 1] = L.elem[t];
	L.elem[i - 1] = e;
	L.length++; 
	return true;
}

//ɾ��˳����еĵ�i��Ԫ��
bool DeleteList(SqList& L, ElemType& e, int i) {
	if (i < 1 || i > L.length)
		return false;
	e = L.elem[i - 1];
	for (int t = i; t < L.length; ++t)
		L.elem[t - 1] = L.elem[t];
	L.length --;
	return true;
}

//bool ClearList(SqList& L) {
//	delete[]L.data;
//	L.data = new ElemType;
//	L.length = 0;
//	if (L.data == NULL)
//		return false;
//	else
//		return true;
//}

