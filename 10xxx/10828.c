#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_LEN 10001

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

Data SPeek(Stack *pstack) {
  if (SIsEmpty(pstack))
    return -1;

  return pstack->stackArr[pstack->topIndex];
}

int main(void) {
  int i, j, n, num;
  char command[6];
  Stack stack;
  StackInit(&stack);

  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%s", command);

    if (!strcmp(command, "push")) {
      scanf("%d", &num);
      SPush(&stack, num);
    } else if (!strcmp(command, "pop"))
      printf("%d\n", SPop(&stack));
    else if (!strcmp(command, "size"))
      printf("%d\n", stack.topIndex + 1);
    else if (!strcmp(command, "empty"))
      printf("%d\n", SIsEmpty(&stack));
    else if (!strcmp(command, "top"))
      printf("%d\n", SPeek(&stack));
  }
  return 0;
}