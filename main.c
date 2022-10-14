#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5
typedef int element;
typedef struct {
	element  data[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

int get_count(QueueType *q){
//fill out the code below
	int count = 0;
	
	return count;
}
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType *q)
{
	q->front = q->rear = 0;
}

int is_empty(QueueType *q)
{
	if(q->front == q->rear){
		printf("The queue is empty\n");
		return 1;
	}
	
	return 0;
}

int is_full(QueueType *q)
{
	if((q->rear + 1) % MAX_QUEUE_SIZE == q->front){
		printf("The queue is empty\n");
		return 1;
	}

	return 0;
}

void enqueue(QueueType *q, element item)
{
	if (!is_full(q)){
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->data[q->rear] = item;
	}
}

element dequeue(QueueType *q)
{
	if (!is_empty(q)){
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		return q->data[q->front];
	}
	
	return 0;
}

element peek(QueueType *q)
{
	if (!is_empty(q))
		return q->data[(q->front + 1) % MAX_QUEUE_SIZE];

	return 0;
}

int main(void)
{
	QueueType queue;
	int element;

	init_queue(&queue);
	printf("Queue에 삽입할 정수를 입력하시오:\n");
	while (!is_full(&queue))
	{
		scanf("%d", &element);
		enqueue(&queue, element);
	}

	printf("Queue에 %d개의 아이템이 저장되어 있음.\n", get_count(&queue));


	return 0;
}
