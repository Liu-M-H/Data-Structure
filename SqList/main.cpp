#include"SqList.h"
int main() {
	SqList s;
	InitList(s);
	CreateList(s);
	cout << s.length << endl;
	ElemType* data;
	data = s.elem;
	int count = 0;
	while (count < s.length) {
		cout << *data << "," ;
		++count;
		++data;
	}
	return 0;
}