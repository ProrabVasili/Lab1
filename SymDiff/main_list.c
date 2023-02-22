#include "main_list.h"

int size(List *list)
{
    List *add = list;
    int i = 0;
    while(add != NULL)
    {
        add = add->next_num;
        i++;
    }
    return i;
}

void append(List **list, int num)
{
    List *add = *list;
    if(add == NULL)
    {
        (*list) = malloc(sizeof(List));
        (*list)->num = num;
        (*list)->next_num = NULL;
        return;
    }
    while(add->next_num != NULL)
    {
        add = add->next_num;
    }
    add->next_num = malloc(sizeof(List));
    add->next_num->num = num;
    add->next_num->next_num = NULL;
}

void push(List **list, int num)
{
    List *first = malloc(sizeof(List));
    first->num = num;
    first->next_num = (*list);
    (*list) = first;
}

void print_list(char *msg, List *list)
{
    printf("%s: ", msg);
    if (list == NULL)
    {
        printf("Empty");
    }
    List *this = list;
    while (this != NULL)
    {
        printf("%d ", this->num);
        this = this->next_num;
    }
    printf("\n");
}

int in(List *list, int val)
{
    List *this = list;
    while (this != NULL)
    {
        if (this->num == val)
        {
            return 1;
        }
        this = this->next_num;
    }
    return 0;
}

void free_list(List **list)
{
    List *this = *list;
    while(this != NULL)
    {
        List *now = this;
        this = this->next_num;
        free(now);
    }
}