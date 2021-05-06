#include"Btree.h"

void CreateBtree_XW(Btree& T)
{
	char check;
	T = new Bnode;
	cout << "请输入根节点信息：" << endl;
	cin >> T->data;
	cout << "是否添加" << T->data << "的左孩子？（Y/N）" << endl;
	cin >> check;
	if (check == 'Y')
		CreateBtree_XW(T->lchild);
	else
		T->lchild = NULL;
	cout << "是否添加" << T->data << "的右孩子？（Y/N）" << endl;
	cin >> check;
	if (check == 'Y')
		CreateBtree_XW(T->rchild);
	else
		T->rchild = NULL;
}

void CreateBtree_BK(Btree& T)
{
	char ch;
	cin >> ch;
	if (ch == '#')
		T = NULL;
	else
	{
		T = new Bnode;
		T->data = ch;
		CreateBtree_BK(T->lchild);
		CreateBtree_BK(T->rchild);
	}
}

void preorder(Btree T)
{
	if (T)
	{
		cout << T->data << " ";
		preorder(T->lchild);
		preorder(T->rchild);
	}
}

void inorder(Btree T)
{
	if (T)
	{
		inorder(T->lchild);
		cout << T->data << " ";
		inorder(T->rchild);
	}
}

void posorder(Btree T)
{
	if (T)
	{
		posorder(T->lchild);
		posorder(T->rchild);
		cout << T->data << " ";
	}
}

int main()
{
	Btree t;
	CreateBtree_BK(t);
	preorder(t); cout << endl;
	inorder(t); cout << endl;
	posorder(t); cout << endl;
	return 0;

}