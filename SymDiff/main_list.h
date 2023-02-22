#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*struct for List*/
typedef struct list
{
    int num;
    struct list *next_num;
} List;

/*List size*/
int size(List *list);

/*Appending value to list*/
void append(List **list, int num);

/*Pushing value in List*/
void push(List **list, int num);

/*Printing List*/
void print_list(char *msg, List *list);

/*Checking value in list*/
int in(List *list, int val);

/*Freeing list memory*/
void free_list(List **list);