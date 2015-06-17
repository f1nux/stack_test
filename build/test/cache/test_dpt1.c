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

void test_create_new_item_11(){

  StackElement *elem = stackElementCreate(11);



  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((elem->data)), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

  if ((((elem->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)21);;};

}



void test_empty_stack_add_one_element_11(){

  Stack *stack =stackCreate();

  StackElement *elem =stackElementCreate(11);

  stackAdd(stack,elem);



  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)29);;};

  if ((((elem)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)30);;};

  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((stack->head->data)), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((stack->tail->data)), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

  if ((((stack->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)34);;};





}



void test_empty_add_two_element_11_22(){

  Stack *stack =stackCreate();

  StackElement *elem =stackElementCreate(11);

  stackAdd(stack,elem);

  StackElement *elem1 =stackElementCreate(22);

  stackAdd(stack,elem1);



  UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((stack->head->data)), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((stack->tail->data)), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

  if ((((stack->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)49);;};



}

void test_empty_add_three_element_11_22_33(){

  Stack *stack =stackCreate();

  StackElement *elem0=stackElementCreate(11);

  stackAdd(stack,elem0);

  StackElement *elem1 =stackElementCreate(22);

  stackAdd(stack,elem1);

  StackElement *elem2 =stackElementCreate(33);

  stackAdd(stack,elem2);



  UnityAssertEqualNumber((_U_SINT)((33)), (_U_SINT)((stack->head->data)), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((stack->tail->data)), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);

  if ((((stack->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)64);;};



}



void test_empty_add_three_element_11_22_33with_1delete_action(){

  Stack *stack =stackCreate();

  StackElement *elem0 =stackElementCreate(11);

  stackAdd(stack,elem0);

  StackElement *elem1 =stackElementCreate(22);

  stackAdd(stack,elem1);

  StackElement *elem2 =stackElementCreate(33);

  stackAdd(stack,elem2);

  stackDel(stack);



  UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((stack->head->data)), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((stack->tail->data)), (((void *)0)), (_U_UINT)79, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);

  if ((((stack->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)81);;};



}



void test_empty_add_three_element_11_22_33with_2delete_action(){

  Stack *stack =stackCreate();

  StackElement *elem0 =stackElementCreate(11);

  stackAdd(stack,elem0);

  StackElement *elem1 =stackElementCreate(22);

  stackAdd(stack,elem1);

  StackElement *elem2 =stackElementCreate(33);

  stackAdd(stack,elem2);

  stackDel(stack);

  stackDel(stack);



  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((stack->head->data)), (((void *)0)), (_U_UINT)96, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((stack->tail->data)), (((void *)0)), (_U_UINT)97, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)98, UNITY_DISPLAY_STYLE_INT);

  if ((((stack->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)99);;};



}



void xtest_empty_add_three_element_11_22_33with_3delete_action(){

  Stack *stack =stackCreate();

  StackElement *elem0 =stackElementCreate(11);

  stackAdd(stack,elem0);

  StackElement *elem1 =stackElementCreate(22);

  stackAdd(stack,elem1);

  StackElement *elem2 =stackElementCreate(33);

  stackAdd(stack,elem2);

   UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_INT);

  stackDel(stack);

   UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

  stackDel(stack);

   UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)115, UNITY_DISPLAY_STYLE_INT);

  stackDel(stack);

   UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)117, UNITY_DISPLAY_STYLE_INT);



  if ((((stack->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)119);;};

  if ((((stack->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)120);;};

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((stack->length)), (((void *)0)), (_U_UINT)121, UNITY_DISPLAY_STYLE_INT);

  if ((((stack->tail->next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)122);;};

  if ((((stack->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)123);;};

  if ((((stack->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)124);;};



}
