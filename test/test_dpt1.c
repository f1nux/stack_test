#include "unity.h"
#include "dpt1.h"
#include "assert.h"
void setUp(void){}

void tearDown(void){}

/*
head ->null
tail ->null
*/
void test_create_stack(){
  Stack *stack =stackCreate();

  TEST_ASSERT_NOT_NULL(stack) ;
  TEST_ASSERT_EQUAL(0,stack->length);
  TEST_ASSERT_NULL(stack->head);
  TEST_ASSERT_NULL(stack->tail);
  
}


/*
head ->null
tail ->null

elem->11
*/
void test_create_new_item_11(){
  StackElement *elem = stackElementCreate(11);
  
  TEST_ASSERT_EQUAL(11, elem->data);
  TEST_ASSERT_NULL(elem->next);
}


/*
head ->
tail -><11>
------
*/
void test_empty_stack_add_one_element_11(){
  Stack *stack =stackCreate();
  StackElement *elem =stackElementCreate(11);
  stackAdd(stack,elem);
  
  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_EQUAL(11, stack->head->data);
  TEST_ASSERT_EQUAL(11, stack->tail->data);
  TEST_ASSERT_EQUAL(1,stack->length);
  TEST_ASSERT_NULL(stack->tail->next);

    
}
/*
head -><22>
tail -><11>
------
*/
void test_empty_add_two_element_11_22(){
  Stack *stack =stackCreate();
  StackElement *elem =stackElementCreate(11);
  stackAdd(stack,elem);
  StackElement *elem1 =stackElementCreate(22);
  stackAdd(stack,elem1);
  
  TEST_ASSERT_EQUAL(22, stack->head->data);
  TEST_ASSERT_EQUAL(11, stack->tail->data);
  TEST_ASSERT_EQUAL(2,stack->length);
  TEST_ASSERT_NULL(stack->tail->next);
  
}

/*
head -> <33>
        <22>
tail -> <11>
------
*/
void test_empty_add_three_element_11_22_33(){
  Stack *stack =stackCreate();
  StackElement *elem0=stackElementCreate(11);
  stackAdd(stack,elem0);
  StackElement *elem1 =stackElementCreate(22);
  stackAdd(stack,elem1);
  StackElement *elem2 =stackElementCreate(33);
  stackAdd(stack,elem2);
  
  TEST_ASSERT_EQUAL(33, stack->head->data);
  TEST_ASSERT_EQUAL(11, stack->tail->data);
  TEST_ASSERT_EQUAL(3,stack->length);
  TEST_ASSERT_NULL(stack->tail->next);
  
}


/*

head -> <22>
tail -> <11>

temp-><33> (and deleted)
------
*/

void test_empty_add_three_element_11_22_33with_1delete_action(){
  Stack *stack =stackCreate();
  StackElement *elem0 =stackElementCreate(11);
  stackAdd(stack,elem0);
  StackElement *elem1 =stackElementCreate(22);
  stackAdd(stack,elem1);
  StackElement *elem2 =stackElementCreate(33);
  stackAdd(stack,elem2);
  stackDel(stack);
  
  TEST_ASSERT_EQUAL(22, stack->head->data);
  TEST_ASSERT_EQUAL(11, stack->tail->data);
  TEST_ASSERT_EQUAL(2,stack->length);
  TEST_ASSERT_NULL(stack->tail->next);
  
}


/*

head -> <22>
tail -> <11>
temp-><33> (and deleted)
====VVVVV====
head -> 
tail -> <11>
temp-><22> (and deleted)

------
*/
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
  
  TEST_ASSERT_EQUAL(11, stack->head->data);
  TEST_ASSERT_EQUAL(11, stack->tail->data);
  TEST_ASSERT_EQUAL(1,stack->length);
  TEST_ASSERT_NULL(stack->tail->next);
  
}

void xtest_empty_add_three_element_11_22_33with_3delete_action(){
  Stack *stack =stackCreate();
  StackElement *elem0 =stackElementCreate(11);
  stackAdd(stack,elem0);
  StackElement *elem1 =stackElementCreate(22);
  stackAdd(stack,elem1);
  StackElement *elem2 =stackElementCreate(33);
  stackAdd(stack,elem2);
   TEST_ASSERT_EQUAL(3,stack->length);
  stackDel(stack);
   TEST_ASSERT_EQUAL(2,stack->length);
  stackDel(stack);
   TEST_ASSERT_EQUAL(1,stack->length);
  stackDel(stack);
   TEST_ASSERT_EQUAL(0,stack->length);
  
  TEST_ASSERT_NULL (stack->head);
  TEST_ASSERT_NULL (stack->tail);
  TEST_ASSERT_EQUAL(0,stack->length);
  TEST_ASSERT_NULL(stack->tail->next);
  TEST_ASSERT_NULL(stack->head);
  TEST_ASSERT_NULL(stack->tail);
  
}






