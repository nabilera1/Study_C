//#pragma once
//
//  LinkedQueue.h
//  SortingAlgorithm

#include<stdio.h>
#include <stdlib.h>

#ifndef LinkedQueue_h


#define LinkedQueue_h

//ť ���
typedef struct QueueNode {
	int item;
	struct QueueNode* link;
} QueueNode;

//ť Ÿ��
typedef struct {
	QueueNode* front, * rear;
} QueueType;

//���� ó�� �Լ�
void puts(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

//�ʱ�ȭ �Լ�
void initQueue(QueueType* q)
{
	q->front = q->rear = 0;
}

//������� �˻�
int isEmpty(QueueType* q)
{
	return (q->front == NULL);
}

//��ȭ���� �˻�
int isFull(QueueType* q)
{
	return 0;
}

//�����Լ�
void enqueue(QueueType* q, int item)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));

	if (temp == NULL)
	{
		puts("memory allocation is failed\n");
	}

	else
	{
		temp->item = item;
		temp->link = NULL;
		if (isEmpty(q))
		{
			q->front = temp;
			q->rear = temp;
		}

		else
		{
			q->rear->link = temp;
			q->rear = temp;
		}
	}
}

//�����Լ�
int dequeue(QueueType* q)
{
	QueueNode* temp = q->front;
	int item;

	if (isEmpty(q))
	{
		puts("queue is empty\n");
	}

	else
	{
		item = temp->item;
		q->front = q->front->link;

		if (q->front == NULL)
			q->rear = NULL;

		free(temp);
		return item;
	}
}

//peek �Լ�
int peek(QueueType* q)
{
	if (isEmpty(q))
		puts("queue is empty\n");
	else
	{
		int item = q->front->item;
		return item;
	}
}

#endif
