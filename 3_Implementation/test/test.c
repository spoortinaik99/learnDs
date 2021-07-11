#include "../inc/fun.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
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

  TEST_ASSERT_EQUAL(0, display());
}
void test_push(void)
{

  int stackSize =10;
  char stack[10];
  int top = -1;
  char *c = "y";
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, push(*c, stack, &top, stackSize), "Un Expected values, Watchout the parameters & Return vals");
}

void test_ll(void)
{

  int stackSize = 10;
  TEST_ASSERT_EQUAL(1, insertll(stackSize));
}
void test_tree()
{
  node *root;
  root = NULL;
  int val = 10;
  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
}
void test_print_preorder()
{
  node *root;
  root = NULL;
  int val = 10;

  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, print_preorder(root), "tree exists");
  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  val = 11;
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  val = 9;
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, print_preorder(root), "Empty tree");
}
void test_print_inorder()
{
  node *root;
  root = NULL;
  int val = 10;

  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, print_inorder(root), "tree exists");
  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  val = 11;
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  val = 9;
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, print_inorder(root), "Empty tree");
}
void test_print_postorder()
{
  node *root;
  root = NULL;
  int val = 10;

  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, print_postorder(root), "tree exists");
  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  val = 11;
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  val = 9;
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, inserttree(&root, val), "Un Expected values, Watchout the parameters & Return vals");
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, print_postorder(root), "Empty tree");
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
  RUN_TEST(test_print_preorder);
  RUN_TEST(test_print_inorder);
  RUN_TEST(test_print_postorder);

  return UNITY_END();
}