#include "unity.h"
#include "dpt1.h"
#include "assert.h"
void setUp(void){}

void tearDown(void){}

void test_create_stack(){
  Stack *stack =stackCreate();

  TEST_ASSERT_NOT_NULL(stack) ;
  TEST_ASSERT_EQUAL(0,stack->length);
  TEST_ASSERT_NULL(stack->head);
  TEST_ASSERT_NULL(stack->tail);
  
}
void test_create_new_item(){
  StackElement *StackElement = stackElementCreate(2);
  
  TEST_ASSERT_EQUAL(2, StackElement->data);
  TEST_ASSERT_NULL(StackElement->next);
 
  
  
}

void test_empty_stack_add_one_element_11(){
 // Stack *stack =stackCreate();
 // StackElement *elem =stackElementCreate(2);
 // stackAdd(*stack,*elem);
 

  

  
    
   


  
  
  
}

void test_empty_add_two_element_11_22(){
  
}

void test_empty_add_three_element_11_22_33(){
  
}

void test_with_3_stack_delete_top(){
  
  
}






