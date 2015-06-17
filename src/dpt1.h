#ifndef dpt1_H
#define dpt1_H


typedef struct StackElement StackElement;//struct StackElement is called StackElement

struct StackElement{
    StackElement *next;
    int data;
};

typedef struct{
    StackElement *head;
    StackElement *tail;
    int length;
}Stack;

Stack *stackCreate();
StackElement *stackElementCreate(int input);
void stackAdd(Stack *stack,StackElement *elem);
StackElement *stackRemove(Stack *stack);





#endif // dpt1_H
