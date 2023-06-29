#include <stdio.h>

#define STACK_LEN 100001

typedef int Data;

typedef struct _arrayStack {
  Data stackArr[STACK_LEN];
  int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack *pstack) {
  pstack->topIndex = -1;
}

int SIsEmpty(Stack *pstack) {
  return pstack->topIndex == -1 ? 1 : 0;
}

void SPush(Stack *pstack, Data data) {
  pstack->topIndex += 1;
  pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack *pstack) {
  if (SIsEmpty(pstack))
    return -1;

  int rIdx = pstack->topIndex;
  pstack->topIndex -= 1;
  return pstack->stackArr[rIdx];
}

int main(void) {
  int k, num, sum = 0;
  Stack stack;
  StackInit(&stack);

  scanf("%d", &k);
  for (int i=0; i<k; i++) {
    scanf("%d", &num);
    if (num != 0) SPush(&stack, num);
    else num = SPop(&stack);
  }
  while (!SIsEmpty(&stack)) {
    sum += SPop(&stack);
  }
  printf("%d\n", sum);
  return 0;
}