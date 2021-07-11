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
}void t2(void)
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


void test_display(void)
{
    int b = 2;

    TEST_ASSERT_EQUAL_INT_MESSAGE(2, b, "B is not equal to 2");
}

void q_display(void)
{
  //char ele="9";
  //char stack[10];

  TEST_ASSERT_EQUAL(0,display());
}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(test_div);
  //RUN_TEST(test_FileAvailability);
  //RUN_TEST(t2);
  RUN_TEST(q_display);
  //RUN_TEST(test_display);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}