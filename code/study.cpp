#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define  true 1
#define  fasle 0

typedef struct node 
{
	int data;
	node *pNext;
}NODE,*pNode;

typedef struct Stact 
{
	pNode top;
	pNode bottom;
}STACT,*pStact;


//初始化
void init(pStact ps)
{
	ps->top = (pNode)malloc(sizeof(NODE));
	if(ps->top == NULL)
	{
		printf("动态内存分配失败！");
		exit(-1);
	}
	else
	{
		 ps->bottom = ps->top;
		 ps->top->pNext = NULL;
	}
}

//插入元素到栈顶
void push(pStact ps,int val)
{
	pNode pNew = (pNode)malloc(sizeof(pNode));   //申请一块节点空间
	pNew->data = val;
	pNew = ps->top->pNext;
	ps -> top = pNew;
	return;

}