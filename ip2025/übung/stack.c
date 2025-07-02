#include <stdio.h>
#include <stdlib.h>
#define errorelement '*'

typedef char element;

struct _stack {
  element val;
  struct _stack* next;
};
typedef struct _stack stack;

stack* init() {
  stack* s = malloc(sizeof(stack));
  s->val = errorelement;
  s->next = NULL;
  return s; 
}

int empty(stack* s) {
  return s == NULL;
}

stack* push(element val, stack* s) {
  stack* elem = malloc(sizeof(stack));
  elem->val = val;
  elem->next = s;
  return elem;
}

element top(stack* s) {
  if (empty(s))
    return errorelement;
  return s->val;
}

stack* pop(stack* s) {
  if (empty(s))
    return init();
  stack* result = s->next;
  free(s);
  return result;
}

int depth(stack* s) {
  int depth = 0;
  for (stack* it = s; it != NULL; it = it->next) depth++;
  return depth;
}

void print_stack(stack* s) {
  for (stack* it = s; it != NULL; it = it->next) {
    printf("%c\n", it->val); 
  }
  printf("(init)\n");
}

int main() {
  // TODO: 1. a, b, c, d (test implementation)
  // (TODO: 2. correct immplementation)
  // TODO: 3. + 4.
  printf("-----\n");
  char* str1 = "()(())"; // check_braces -> 1 (true)
  char* str2 = "()())"; // check_braces -> 0 (false)
  char* str3 = "(){}[()]"; // check_braces -> 1 (true)
  char* str4 = "({}}"; // check_braces -> 0 (false)
  return 0;
}
