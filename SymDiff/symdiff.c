#include "main_list.h"
#include "valid.h"
#include "symdiff.h"

List *create_set(int n)
{
    List *list = NULL;
    int size = positive_num(n, 1), value;
    for (int i = 0; i<size; i++)
    {
        value = positive_num(i, 0);
        if (!in(list, value))
        {
            append(&list, value);
        }
    }
    return list;

}


List *diff_list(List *list_1, List *list_2)
{
    List *diff = NULL, 
         *copy = list_1;
    while(copy != NULL)
    {
        if (!in(list_2, copy->num))
        {
            push(&diff, copy->num);
        }
        copy = copy->next_num;
    }
    return diff;

}

List *symmetric_diff(List *list_1, List *list_2)
{
    List *diff_1 = diff_list(list_1, list_2),
         *diff_2 = diff_list(list_2, list_1);

    while(diff_1 != NULL)
    {
        push(&diff_2, diff_1->num);
        diff_1 = diff_1->next_num;
    }
    return diff_2;
}
