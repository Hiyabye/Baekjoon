#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct Queue {
  Node *front;
  Node *rear;
  int count;
} Queue;

void initQueue(Queue *queue) {
  queue->front = queue->rear = NULL;
  queue->count = 0;
}

int isEmpty(Queue *queue) {
  return queue->count == 0;
}

void enqueue(Queue *queue, int data) {
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (isEmpty(queue))
    queue->front = newNode;
  else
    queue->rear->next = newNode;
  queue->rear = newNode;
  queue->count++;
}

int dequeue(Queue *queue) {
  int data;
  Node *ptr;

  if (isEmpty(queue))
    return 0;

  ptr = queue->front;
  data = ptr->data;
  queue->front = ptr->next;
  free(ptr);
  queue->count--;
  return data;
}

int main(void) {
  int n;
  Queue queue;

  initQueue(&queue);
  scanf("%d", &n);
  for (int i=1; i<=n; i++)
    enqueue(&queue, i);

  int tmp, turn = 1;
  while (queue.count > 1) {
    tmp = dequeue(&queue);
    if (turn == 1) {
      turn = 0;
    } else {
      enqueue(&queue, tmp);
      turn = 1;
    }
  }
  printf("%d", dequeue(&queue));
  return 0;
}