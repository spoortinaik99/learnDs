#include "../inc/fun.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
// #include "../unity/unity.c"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_div(void)
{
  TEST_ASSERT_EQUAL(1, 1);
  TEST_ASSERT_EQUAL(0, 0);
}
void test_FileAvailability(void)
{
    FILE *fptr;
    fptr = fopen("../7_Others/User.txt", "a+");

    TEST_ASSERT_MESSAGE(fptr, "Program cannot access FILE");
}


void test_define(void)
{
  TEST_ASSERT_EQUAL_INT_MESSAGE(50, MAX, "!!!IMP /Dont change max value");
}

void q_display(void)
{
  //char ele="9";
  //char stack[10];

  TEST_ASSERT_EQUAL(0,display());
}/*
void test_visual_stack(void)
{
  #ifndef V
  #define V
  char stack[10];
  stack[8]="q";
  stack[9]="p";
  #endif
  TEST_ASSERT_EQUAL(true,visualize_stack(stack,8));
}*/

void test_push(void){

int stackSize = 10;
char stack[10];
char element;
int top =-1;
char *c="y";
  TEST_ASSERT_EQUAL_INT_MESSAGE(1,push(*c,stack,&top,stackSize),"Un Expected values, Watchout the parameters & Return vals");

}

void test_ll(void){

int stackSize = 10;

  TEST_ASSERT_EQUAL(1,insertll(stackSize));
}
void test_tree(){
     node *root;
     root = NULL;
     int val =10;
  TEST_ASSERT_EQUAL_INT_MESSAGE(-1,inserttree(&root,val),"Un Expected values, Watchout the parameters & Return vals");


}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_div);
  RUN_TEST(test_FileAvailability);
  RUN_TEST(test_push);
  RUN_TEST(q_display);
  RUN_TEST(test_define);
  RUN_TEST(test_ll);
  RUN_TEST(test_tree);
  
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}