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


//��ʼ��
void init(pStact ps)
{
	ps->top = (pNode)malloc(sizeof(NODE));
	if(ps->top == NULL)
	{
		printf("��̬�ڴ����ʧ�ܣ�");
		exit(-1);
	}
	else
	{
		 ps->bottom = ps->top;
		 ps->top->pNext = NULL;
	}
}

//����Ԫ�ص�ջ��
void push(pStact ps,int val)
{
	pNode pNew = (pNode)malloc(sizeof(pNode));   //����һ��ڵ�ռ�
	pNew->data = val;
	pNew = ps->top->pNext;
	ps -> top = pNew;
	return;

}