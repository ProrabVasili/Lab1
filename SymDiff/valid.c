#include "valid.h"

int positive_num(int msg, int size_elem){
    int k, i = 0; 
    char b;
    do{ 
        if(i){
            printf("You didn't enter a positive integer number! Try again)\n"); 
        }
        if (size_elem)
        {
            printf("Enter size of %d list: ", msg);
        }
        else 
        {
            printf("Enter item %d: ", msg);
        }
        char di[128], st[128] = {'\0'};
        fgets(di, 128, stdin);
        if(!isdigit(di[0])){
            b = 12;
            i++;
        }
        else{
            sscanf(di, "%d%s", &k, st);
            b = st[0];
            if(!k && !size_elem){
                b = 12;
            }
            i++;
        }
    }
    while(b != 0);
    return k;
}