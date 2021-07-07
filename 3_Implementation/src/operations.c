#include <fun.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


void visualize_stack(char stack[],int stackSize){
    printf("\nVisualization of the stack:-\n\n\n\n");
    while (!(stackSize==10))
    {
        printf("| %c |\n",stack[stackSize++]);
        printf("-----\n");
    }
    
    getchar();
    
}

void push(char element, char stack[], int *top, int stackSize){
 if(*top == -1){
  stack[stackSize - 1] = element;
  *top = stackSize - 1;
 }
 else if(*top == 0){
  printf("\n\nThe stack is already full. \n\n Try Popping out\n\n");
 }
 else{
  stack[(*top) - 1] = element;
  (*top)--;
 }
}

void pop(char stack[], int *top, int stackSize){
 if(*top == -1){
   printf("\n\n\nThe stack is empty. \n");
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
        printf("\n\n\n------------------------------------------------------------\n\n\n");
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
            visualize_stack(stack,top);
            break;
        case 2:
            pop(stack, &top, stackSize);
            visualize_stack(stack,top);
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











//QUEUE


#define MAX 50

int queue_array[MAX];
int rear = - 1;
int front = - 1;



void display()
{
    int i;
    if(front == - 1)
        printf("Queue is empty n");
    else
    {
        printf("\n\n\n------------------------------------------------------------\n\n\n");

        printf("Visualization of Queue is \n\n");

        printf("----------------------------------------------------------------\n");
        for(i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n----------------------------------------------------------------\n");
        printf("\n\n\n------------------------------------------------------------\n\n\n");
    }
}


void insert()
{
    int item;
    if(rear == MAX - 1)
    printf("Queue Overflow n");
    else
    {
        if(front== - 1)
        front = 0;
        printf("Type an integer to Insert the element in queue : ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
        display();
    }
}
void delete()
{
    if(front == - 1 || front > rear)
    {
    printf("Queue Underflow n");
    return;
    }
    else
    {
    printf("Element deleted from queue is : %dn", queue_array[front]);
    front = front + 1;
            display();

    }
}

void queue_init(){
    int choice;
    while (1)
    {
    printf("1.Insert element to queue \n");
    printf("2.Delete element from queue \n");
    printf("4.Quit \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
    insert();
    break;
    case 2:
    delete();
    break;
    case 3:
    display();
    break;
    case 4:
    exit(1);
    default:
    printf("Wrong choice n\n");
    }
    }
}
void start_queue(){
    int c;
    while (1)
    {
    printf("1.Information \n");
    printf("2.Execution \n");
    printf("4.Quit \n");
    printf("Enter your choice : ");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        printf("\n\n\n------------------------------------------------------------\n\n\n");

        printf("Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.\n");
        printf("A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops.");
        printf("\n\n\n------------------------------------------------------------\n\n\n");

    break;
    case 2:
    queue_init();
    break;
    case 4:
    exit(0);
    default:
    printf("Wrong choice n\n");
    }
    }
    return;
}



//TREES







struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList() {

   struct node *ptr = head;
   printf("\nVisualization of Linked List");

   printf("\n\n\n---------------------------------------------------------------------\n\n\n");
   printf("\n[head] =>");
   //start from the beginning
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
   printf("\n\n\n---------------------------------------------------------------------\n\n\n");

}

//insert link at the first location
void insertll(int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->next = head;

   //point first to new first node
   head = link;
   
   printList();
}







void ll_init(){
        int item;
    int cho;
    while (1)
    {
    printf("1.Insert \n");
    printf("0.Exit \n");
    printf("Enter your choice : ");

    scanf("%d", &cho);
    switch (cho)
    {
    case 0:
        exit(0);
        break;
    
    case 1:
   printf("\n\n\n---------------------------------------------------------------------\n\n\n");

        printf("Enter the Integer element to insert: ");
        scanf("%d",&item);
        insertll(item);
        break;
    default:
    printf("Wrong choice n\n");
        break;
    }
    }
    
}

void start_ll(){

    int c;
    while (1)
    {
    printf("1.Information \n");
    printf("2.Execution \n");
    printf("4.Quit \n");
    printf("Enter your choice : ");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        printf("\n\n\n------------------------------------------------------------\n\n\n");

        printf("The size of the linked list is not fixed, and data items can be added at any locations in the list. The disadvantage is that to get to a node, we must traverse to all the way from the first node to the node that we require. The Linked List is like an array but unlike an array, it is not stored sequentially in the memory.\n");
        printf("There are multiple functions that can be implemented on the linked list in C. Let’s try to understand them with the help of an example program. First, we create a list, display it, insert at any location, delete a location. The following code will show you how to perform operations on the list.");
        printf("\n\n\n------------------------------------------------------------\n\n\n");

    break;
    case 2:
   printf("\n\n\n---------------------------------------------------------------------\n\n\n");

    ll_init();
    break;
    case 4:
    exit(0);
    default:
    printf("Wrong choice n\n");
    }
    }

    return;
}
