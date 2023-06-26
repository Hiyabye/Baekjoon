#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

typedef struct Queue {
  Node* front;
  Node* rear;
} Queue;

void init(Queue* q) {
  q->front = q->rear = NULL;
}

int empty(Queue* q) {
  return q->front == NULL;
}

void enqueue(Queue* q, int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (empty(q)) q->front = newNode;
  else          q->rear->next = newNode;
  q->rear = newNode;
}

int dequeue(Queue* q) {
  Node* front = q->front;
  int data = front->data;
  q->front = front->next;
  free(front);
  return data;
}

int main(void) {
  int n, k;
  Queue q;
  init(&q);

  scanf("%d %d", &n, &k);

  for (int i=0; i<n; i++) {
    enqueue(&q, i+1);
  }

  printf("<");
  while (!empty(&q)) {
    for (int i=0; i<k-1; i++) {
      enqueue(&q, dequeue(&q));
    }
    printf("%d", dequeue(&q));
    if (!empty(&q)) printf(", ");
  }
  printf(">");

  return 0;
}