///*
//  对栈实现初始化，插入栈顶元素，删除栈顶元素，遍历栈，清空栈等基本操作
//  */
//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//
//#define true 1
//#define false 0
//
//
//typedef struct Node
//{
//    int data;
//    struct Node *pNext;
//}NODE, *PNODE;
//
//typedef struct Stack
//{
//    PNODE pTop;
//    PNODE pBottom;
//}STACK, *PSTACK;
//
//void init(PSTACK pS);
//void push(PSTACK pS, int val);
//void traverse(PSTACK pS);
//int pop(PSTACK pS , int *val);
//void clear(PSTACK pS);
//int empty(PSTACK pS);
//
//int main(void)
//{
//    STACK S ;
//    int val;
//    int i;
//    
//    init(&S);
//    
//    push(&S,1);
//    push(&S,2);
//    push(&S,3);
//    push(&S,4);
//    push(&S,5);
//    push(&S,6);
//
//    traverse(&S);
//    
//    if(pop(&S ,&val))
//    {
//        printf("遍历成功，出栈元素为%d\n",val);
//    }
//    else
//    {
//        printf("出栈失败！\n");
//    }
//    traverse(&S);
//
//    clear(&S);
//    
//    traverse(&S);
//    
//    return 0 ;
//}
//
////栈的初始化
//void init(PSTACK pS)
//{
//    pS -> pTop = (PNODE)malloc(sizeof(NODE));
//    
//    if(NULL == pS -> pTop)
//    {
//        printf("动态内存分配失败！");
//        exit(-1);
//    }
//    else
//    {
//        pS -> pBottom = pS -> pTop;
//        pS -> pTop -> pNext = NULL;
//    }
//    
//    return ;
//}
//
////插入元素到栈顶
//void push(PSTACK pS , int val)
//{
//    PNODE pNew = (PNODE)malloc(sizeof(NODE));
//    
//    pNew -> data = val;
//    pNew -> pNext = pS -> pTop;
//    pS -> pTop = pNew;
//    
//    return ;
//}
//
////遍历栈S
//void traverse(PSTACK pS)
//{
//    PNODE p = pS -> pTop;
//    
//    printf("栈内元素为：");
//    while(p != pS -> pBottom)
//    {
//        printf("%d\t", p -> data);
//        p = p -> pNext;
//    }
//    
//    printf("\n");
//    return ;
//}
//
////判断栈是否为空
//int empty(PSTACK pS)
//{
//    if(pS -> pTop == pS -> pBottom)
//    {
//        return true;
//    }
//    else
//        return false;
//}
//
////删除栈顶元素并将其值赋给*val
//int pop(PSTACK pS , int *val)
//{
//    if(empty(pS))
//    {
//        return false;
//    }
//    else
//    {
//        PNODE r = pS -> pTop;
//        *val = r -> data;
//        pS -> pTop = r -> pNext;
//        free(r);
//        r = NULL;
//    }
//}
//
////清空栈S
//void clear(PSTACK pS)
//{
//    if(empty(pS))
//    {
//        return;
//    }
//    else
//    {
//        PNODE p = pS -> pTop;
//        PNODE q = NULL;
//        
//        while(p != pS -> pBottom)
//        {
//            q = p -> pNext;
//            free(p);
//            p = q ;
//        }
//        
//        pS -> pTop = pS -> pBottom;
//        
//        return;
//    }
//}