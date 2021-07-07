/**
 * @file project_main.c
 * @author Sumanth
 * @brief  This is where the execution starts 
 * @version 0.1
 * @date 2021-07-06
 * @copyright Copyright (c) 2021
 * Index file
 * 
 */
#include <fun.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * @brief Main function Execution intiated by the system
 * No command line arguments
 * @return int 
 */
int main(){
    int choice;
    printf("-- Welcome to LearnDs (Data Structures) Project --\n");
    printf("\n\n\n\n\n\n");
    printf("Press Enter to get started.\n");
    getchar();
    while(1){
        printf("\n\n\n------------------------------------------------------------\n\n\n");
        printf("1. Stack \n");
        printf("2. Queue \n");
        printf("3. Linked List \n");
        printf("4. Trees \n");
        printf("0. Exit \n");
        scanf("%d",&choice);
        printf("\n\n\n\n");
        switch (choice)
        {
            case 0 :exit(0);
            case 1:
                stack_op();
                break;
            case 2:
                start_queue();
                break;
            case 3:
                start_ll();
                break;
            case 4:
                start_tree();
                break;

            default: printf("Enter proper Choice\n"); 
                break;
        }
    }
    return 0;
}