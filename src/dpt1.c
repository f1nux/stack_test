#include "dpt1.h"
#include "string.h"
#include "malloc.h"
#include <assert.h>

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

 // S->head->data=elem;
 
  //S->tail =elem;
 
   // printf("%d\n",elem);
    //  printf("%d",S->head);
      
    //  S->next=S->head;
 //S->head =elem;
  
  
  
};



StackElement *stackDel(Stack *stack){
  
  
  
    
    
    
    
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
