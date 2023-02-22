#include "symdiff.c"

int main()
{
    List *first_set = create_set(1),
         *second_set = create_set(2);

    List *sym_diff = symmetric_diff(first_set, second_set);

    print_list("First set", first_set);
    print_list("Second set", second_set);
    print_list("Symmetric difference of sets", sym_diff);

    free_list(first_set);
    free_list(second_set);
    free_list(sym_diff);

    system("pause");

    return 0;
}