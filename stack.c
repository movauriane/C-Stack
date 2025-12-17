#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// structure stack
typedef struct stack {
  int top;
  int items[MAX];
} s;

// check if the stack is full
int isFull(s *myStack) {
  if (myStack->top == MAX - 1) {
    return 1;
  } else {
    return 0;
  }
}

// check if the stack is empty
int isEmpty(s *myStack) {
  if (myStack->top == -1) {
    return 1;
  } else {
    return 0;
  }
}

// initialize stack
void initialize(s *myStack) {
  myStack->top = -1;
}

// push new item to the stack
void push(s *myStack, int newItem) {
  if (isFull(myStack)) {
    printf("Stack full\n");
  } else {
    myStack->top += 1;
    int newIndex = myStack->top;
    myStack->items[newIndex] = newItem;
  }
}

// remove last element from stack
int pop(s *myStack) {
  if (isEmpty(myStack)) {
    printf("\n Stack Empty \n");
    return -1;
  }

  int poppedItem = myStack->items[myStack->top];
  myStack->top--;
  return poppedItem;
}

int peek(s *myStack){
  if (isEmpty(myStack)){
     printf("\n Stack Empty \n");
    return -1;
  } else {
    return myStack->items[myStack->top];
  }
}

// print stack
void printStack(s *myStack) {
  printf("Stack:\n");
  for (int i = 0; i <= myStack->top; i++) {
    printf("%d\n", myStack->items[i]);
  }
  printf("\n");
}

// returns length of stack
int getStackLength(s *myStack) {
  return myStack->top + 1;
}

int main() {
  s myStack;

  initialize(&myStack);

  push(&myStack, 1);
  push(&myStack, 4);
  push(&myStack, 9);

  pop(&myStack);
  pop(&myStack);

  printf("After popping out\n");
  printStack(&myStack);

  return 0;
}