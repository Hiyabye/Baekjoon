#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define STACK_LEN 51

typedef char Data;

typedef struct _arrayStack {
  Data stackArr[STACK_LEN];
  int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack *pstack) {
  pstack->topIndex = -1;
}

int SIsEmpty(Stack *pstack) {
  return pstack->topIndex == -1 ? TRUE : FALSE;
}

void SPush(Stack *pstack, Data data) {
  pstack->topIndex += 1;
  pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack *pstack) {
  if (SIsEmpty(pstack))
    return 'F';

  int rIdx = pstack->topIndex;
  pstack->topIndex -= 1;
  return pstack->stackArr[rIdx];
}

Data SPeek(Stack *pstack) {
  if (SIsEmpty(pstack))
    return 'F';

  return pstack->stackArr[pstack->topIndex];
}

int checkVPS(char str[]) {
  Stack stack;
  StackInit(&stack);

  for (int i=0; i<strlen(str); i++) {
    if (str[i] == '(') {
      if (SPeek(&stack) == ')') return FALSE;
      else SPush(&stack, str[i]);
    } else if (str[i] == ')') {
      if (SPeek(&stack) == '(') SPop(&stack);
      else SPush(&stack, str[i]);
    }
  }
  return SIsEmpty(&stack);
}

int main(void) {
  int t;
  char str[51];

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%s", str);
    if (checkVPS(str) == TRUE)  printf("YES\n");
    else                        printf("NO\n");
  }
  return 0;
}