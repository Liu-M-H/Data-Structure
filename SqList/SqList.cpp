#include"SqList.h"
//初始化列表
bool InitList(SqList& L) {
	L.elem  = new ElemType[MAXSIZE];

	if (L.elem == NULL)
		return false;
	L.length = 0;
	return true;
}
//创建列表
bool CreateList(SqList& L) {
	ElemType i;
	int t = 0;
	while (cin >> i ) {
		if (L.length == MAXSIZE)
		{
			cout << "顺序表已满！" << endl;
			return false;
		}
		L.elem[t++] = i;
		++L.length;
	}
	return true;
}
//从列表中取值
bool GetElem(SqList L, int i, ElemType e) {
	if (i<1 || i>L.length)
		return false;
	e = L.elem[i - 1];
	return true;
}
//查找
int LocateList(SqList L, ElemType e) {
	for (int i = 0; i < L.length; ++i)
		if (L.elem[i] == e)
			return i + 1;
	cout << "顺序表中无该元素！";
	return -1;
}
//在顺序表的第i个元素前插入一个元素或在末尾插入一个元素
bool InsertList(SqList& L, ElemType e, int i) {
	if (i < 1 || i > L.length + 1)
	{
		cout << "i的值不合理！";
		return false;
	}
	if (L.length == MAXSIZE)
	{
		cout << "顺序表已满！";
		return false;
	}
	for (int t = L.length - 1; t >= i - 1; ++t)
		L.elem[t + 1] = L.elem[t];
	L.elem[i - 1] = e;
	L.length++; 
	return true;
}

//删除顺序表中的第i个元素
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

