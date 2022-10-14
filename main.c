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
	QueueType q;
	
	init_queue(&q);
	
	for(int i=0; i < MAX_QUEUE_SIZE-1; i++)
		enqueue(&q, i);
	
	i = dequeue(&q);
	i = dequeue(&q);
	
	enqueue(&q, i);

	printf("%d\n", get_count(&q));

	return 0;
}
