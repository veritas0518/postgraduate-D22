//#include<stdio.h>
//#include<stdlib.h>
//
//#define  datatype  int
//
//typedef  struct  linkqueuenode
//{
//	datatype  data;    //定义元素类型
//	struct  linkqueuenode* next;
//}LinkQueueNode;          //结点类型
//
//typedef  struct
//{
//	LinkQueueNode* rear;        //队尾指针定义
//}LinkQueue;                          //链队列类型定义
//
//void  InQueue(LinkQueue* q, int  x)  //这个 q 不是一个节点，是一个指向这个结构体数组的指针
//{
//	LinkQueueNode* p;
//	p = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//	if (q->rear == NULL) {  //如果队列为空
//		p->data = x;
//		p->next = p;//因为要保持循环队列，新节点p->next也得指向自己
//		q->rear = p;  //q->rear就是将q 指针也指向p这个新节点
//	}
//
//	else {   //因为if中已经创造了一个指向自己的节点，所以循环已经产生
//		p->data = x;
//		p->next = q->rear->next;//新节点的next指针指向q的next指针域
//		q->rear->next = p; //再让q指回头节点，保持循环
//		q->rear = p;//q再赋值给p
//	}
//}
//
//int  OutQueue(LinkQueue* q, int* x)
//{
//	
//	if (q->rear == NULL) {     //如果队列为空，就出不了队
//		printf("Queue is Empty!\n");
//		return 0;
//	}
//	else {
//		
//		LinkQueueNode* p;
//		p = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//		p = q->rear->next;
//		q->rear->next = p->next;
//		*x = p->data;//带回主调函数
//		if (q->rear->next == p) {
//			q->rear = NULL;
//			return -1;
//		}
//		return 1;
//	}
//	//出队成功，返回1；出队失败，返回0
//}
//void  show(LinkQueue* q)
//{
//	LinkQueueNode* p;
//	int  x;
//	if (q->rear == NULL)
//	{
//		printf("Queue  is  Empty!\n");
//	}
//	else
//	{
//		p = q->rear->next;
//		do
//		{
//			x = p->data;
//			printf("%d  ", x);
//			p = p->next;
//		} while (p != q->rear->next);
//		printf("\n");
//	}
//}
//
//int  main(void)
//{
//	LinkQueue* q;
//	int  T, n;
//	datatype  x;
//	q = (LinkQueue*)malloc(sizeof(LinkQueue));
//	q->rear = NULL;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		switch (n)
//		{
//		case  1:
//			scanf("%d", &x);
//			InQueue(q, x);
//			break;
//		case  2:
//			if (OutQueue(q, &x))
//			{
//				printf("%d\n", x);
//			}
//			break;
//		default:
//			exit(1);
//		}
//	}
//	show(q);
//	return  0;
//}