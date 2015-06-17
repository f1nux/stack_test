#include "dpt1.h"
#include "string.h"
#include "malloc.h"
#include <assert.h>
#include <stdio.h>

/*typedef struct StackElement StackElement;//struct StackElement is called StackElement

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
StackElement *stackElementCreate(int data);
void stackAdd(Stack *stack,StackElement *elem);
StackElement *stackDel(Stack *stack);
*/

int dpt1(){
  return 0;
}

StackElement *stackElementCreate(int input){
  StackElement * StackElement = malloc(sizeof(StackElement));
  
  StackElement->data = input;
  StackElement->next = NULL;
  
  return StackElement; 
}


void stackAdd(Stack *S,StackElement *elem){
  
  if(S==NULL||elem==NULL){
    printf("Memory Error");
    return;
  }
  StackElement *temp = malloc(sizeof(StackElement));
  temp    = S->head;
  S->head = elem; //classic swap
 // printf("%d\n",elem);
 //  printf("%d",S->head);
  
  if(S->length == 0){
    S->head->next = NULL;
    S->tail = elem;
  }else S->head->next = temp;
  
   S->length++; //counter
   S->tail->next = NULL; 
   
  //printf("when add%d",S->length);
  
}



StackElement *stackDel(Stack *S){
  StackElement *temp = malloc(sizeof(StackElement));


  temp    = S->head;

  if(S->length >=2)
    S->head = S->head->next;
  else{
    S->head =NULL;
    S->tail =NULL;
  }

   S->length--;
   //printf("delete%d",S->length);
    free(temp);
}


Stack *stackCreate(){
  //Create a Stack 
        Stack *S;
       S = (Stack *)malloc(sizeof(Stack));
       assert (S !=NULL);
  //initialise
        S->length = 0;
        S->head =NULL;
        S->tail =NULL;
        
        return S;
}
