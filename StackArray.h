#ifndef STACK_ARRAY
#define STACK_ARRAY
#define MAX 10

typedef struct {
    int data[MAX];
    int top;
}StackArrayList;

void initStack(StackArrayList *s);
StackArrayList createStack();

bool isEmpty(StackArrayList s);
bool isFull(StackArrayList s);

bool stack_push(StackArrayList *s, int elem);
bool stack_pop(StackArrayList *s);
int stack_peek(StackArrayList s);

void display(StackArrayList s);
void visualize(StackArrayList s);

#endif
