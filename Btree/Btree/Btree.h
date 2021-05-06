#pragma once
#include<iostream>
#include<algorithm>

using namespace std;
typedef int ElemType;

//定义一个二叉树（二叉链表形式）
typedef struct Bnode {
	ElemType data;
	struct Bnode * lchild, * rchild;
}Bnode,*Btree;

//定义一个线索二叉树
typedef struct BTnode {
	ElemType data;
	struct BTnode* lchild, * rchild;
	bool ltag, rtag;
}BTNode,*BTtree;

void CreateBtree_XW(Btree& T);//询问法创建二叉树
void CreateBtree_BK(Btree& T);//补空法创建二叉树

void preorder(Btree T);//先序遍历
void inorder(Btree T);//中序遍历
void posorder(Btree T);//后序遍历



