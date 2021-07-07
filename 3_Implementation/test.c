#include "unity.h"
#include "fun.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_div(void)
{
  TEST_ASSERT_EQUAL(1, 1);
  TEST_ASSERT_EQUAL(0, 0);
}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_div);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}