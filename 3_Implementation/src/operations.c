#include <fun.h>
#include<stdio.h>
#include<stdlib.h>

void visualize_stack(char stack[],int stackSize){
    int temp=10-stackSize;
    printf("%d",stackSize);
    while (!stackSize==10)
    {
        printf("%c\n",stack[stackSize]);
        stackSize++;
        /* code */
    }
    
    getchar();
    
}

void push(char element, char stack[], int *top, int stackSize){
 if(*top == -1){
  stack[stackSize - 1] = element;
  *top = stackSize - 1;
 }
 else if(*top == 0){
  printf("The stack is already full. \n");
 }
 else{
  stack[(*top) - 1] = element;
  (*top)--;
 }
}

void pop(char stack[], int *top, int stackSize){
 if(*top == -1){
   printf("The stack is empty. \n");
 }
 else{
  printf("Element popped: %c \n", stack[(*top)]);
  if((*top) == stackSize - 1){
    (*top) = -1;
  }
  else{
    (*top)++;
  }
 }
}


void start_stack(){

    int cc,stackSize = 10;
    char stack[stackSize];
    char element;
  // A negative index shows that the stack is empty
  int top = -1;
    printf("\n\n\n------------------------------------------------------------\n\n\n");
            char k;

    while (1)
    {
        printf("------------------------------------------------------------\n\n\n");
        printf("Stack Operations\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("0.Exit\n");
        scanf("%d",&cc);
        switch (cc)
        {
        case 0 : exit(0);

        case 1:
            printf("Enter Element to push\n");
            scanf(" %c",&k);
            push(k, stack, &top, stackSize);
            printf("Element on top: %c\n", stack[top]);
            visualize_stack(stack,stackSize);
            break;
        case 2:
            pop(stack, &top, stackSize);
            break;
            default: printf("Enter proper Choice\n"); 
            break;
        }
    }
   
}




int stack_op()
{
    int ch;
    printf("------------------------------------------------------------\n");
    printf("Stack\n");
    printf("1.Information\n");
    printf("2.Execution\n");
    printf("0.Exit\n");
    scanf("%d",&ch);
    while(1){
        switch (ch)
        {
        case 0 : exit(0);
        case 1:
            printf("\nA real-world stack allows operations at one end only. For example, we can place or remove a card or plate from the top of the stack only. Likewise, Stack ADT allows all data operations at one end only. At any given time, we can only access the top element of a stack.\nThis feature makes it LIFO data structure. LIFO stands for Last-in-first-out. Here, the element which is placed (inserted or added) last, is accessed first. In stack terminology, insertion operation is called PUSH operation and removal operation is called POP operation.\n\n");
            getchar();
            break;
        case 2:
            start_stack();
            break;
        default:printf("Enter proper Choice\n"); 
            break;
        }
    }
    return 0;
}
