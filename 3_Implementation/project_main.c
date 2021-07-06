/**
 * @file project_main.c
 * @author Sumanth
 * @brief  This is where the execution starts
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <fun.h>

#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice;
    printf("-- Welcome to LearnDs (Data Structures) Project --\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Enter any character to get started.\n");

    getchar();
    //int r = stack_op(12,43);
    //printf(" %d\n",r);
    printf("------------------------------------------------------------\n");

    printf("1. Stack \n");
    printf("2. Queue \n");
    printf("3. Linked List \n");
    printf("4. Trees \n");
    scanf("%d",&choice);
    printf("\n\n\n\n");

    switch (choice)
    {
    case 1:
        stack_op();
        break;
    
    default: printf("Enter proper Choice\n"); 
        break;
    }
    return 0;
}