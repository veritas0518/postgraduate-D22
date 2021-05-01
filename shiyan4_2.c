//#include<stdio.h>
//#include<stdlib.h>
//
//#define  datatype  int
//
//typedef  struct  linkqueuenode
//{
//	datatype  data;    //����Ԫ������
//	struct  linkqueuenode* next;
//}LinkQueueNode;          //�������
//
//typedef  struct
//{
//	LinkQueueNode* rear;        //��βָ�붨��
//}LinkQueue;                          //���������Ͷ���
//
//void  InQueue(LinkQueue* q, int  x)  //��� q ����һ���ڵ㣬��һ��ָ������ṹ�������ָ��
//{
//	LinkQueueNode* p;
//	p = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//	if (q->rear == NULL) {  //�������Ϊ��
//		p->data = x;
//		p->next = p;//��ΪҪ����ѭ�����У��½ڵ�p->nextҲ��ָ���Լ�
//		q->rear = p;  //q->rear���ǽ�q ָ��Ҳָ��p����½ڵ�
//	}
//
//	else {   //��Ϊif���Ѿ�������һ��ָ���Լ��Ľڵ㣬����ѭ���Ѿ�����
//		p->data = x;
//		p->next = q->rear->next;//�½ڵ��nextָ��ָ��q��nextָ����
//		q->rear->next = p; //����qָ��ͷ�ڵ㣬����ѭ��
//		q->rear = p;//q�ٸ�ֵ��p
//	}
//}
//
//int  OutQueue(LinkQueue* q, int* x)
//{
//	
//	if (q->rear == NULL) {     //�������Ϊ�գ��ͳ����˶�
//		printf("Queue is Empty!\n");
//		return 0;
//	}
//	else {
//		
//		LinkQueueNode* p;
//		p = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
//		p = q->rear->next;
//		q->rear->next = p->next;
//		*x = p->data;//������������
//		if (q->rear->next == p) {
//			q->rear = NULL;
//			return -1;
//		}
//		return 1;
//	}
//	//���ӳɹ�������1������ʧ�ܣ�����0
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