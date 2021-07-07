/**
 * @file fun.h
 * @author Sumanth 
 * @brief This file contains basic definitions needed to make this project run 
 * @version 0.2
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Contains all the stack operations 
 * Called after start_stack function is called first
 * @return int 
 */
int stack_op();
/**
 * @brief Initiation of stack execution
 * takes no parameters
 * @return void
 */
void start_stack();
/**
 * @brief Pops the top element and the prints the stack for visualization
 * @param stack 
 * @param top 
 * @param stackSize 
 */
void pop(char stack[], int *top, int stackSize);
/**
 * @brief Pushes the element at the top of the stack
 * 
 * @param element 
 * @param stack 
 * @param top 
 * @param stackSize 
 */
void push(char element, char stack[], int *top, int stackSize);

 
/**
 * @brief Start queue function runs all the other queue functions to run queue
 * This runs when queue is intiated
 * Definition of startqueue function
 * takes no parameters
 * @return void
 */
void start_queue();
/**
 * @brief As its name says it is initiated when linked lists execution is called by the user
 * Definition of startll function
 * takes no parameters
 * @return void
 */
void start_ll();
/**
 * @brief when user hits tree execution it initiates from this function
 * Definition of starttree function
 * takes no parameters
 * @return void
 */
void start_tree();

