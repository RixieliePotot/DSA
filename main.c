#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "StackArray.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
    StackArrayList sList;
    
    initStack(&sList);
    
    display(sList);
    
    
    
    return 0;
}
