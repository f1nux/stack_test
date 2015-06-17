#include "dpt1.h"
#include "unity.h"
void setUp(void){}



void tearDown(void){}



void test_create_stack(){

  Stack *stack =stackCreate();



  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)11);;} ;

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)12, UNITY_DISPLAY_STYLE_INT);

  if ((((stack->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)13);;};

  if ((((stack->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)14);;};



}

void test_create_new_item(){

  StackElement *elem = stackElementCreate(2);



  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((elem->data)), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

  if ((((elem->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)21);;};

}



void test_empty_stack_add_one_element_11(){

  Stack *stack =stackCreate();

  StackElement *elem =stackElementCreate(2);

  stackAdd(stack,elem);











}



void test_empty_add_two_element_11_22(){



}



void test_empty_add_three_element_11_22_33(){



}



void test_with_3_stack_delete_top(){





}
