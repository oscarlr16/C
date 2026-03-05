#include <stdio.h>

int main()
{
    int var = 42;
    int *ptr_var = &var;
    
    printf("Variable 'var' value: %d\n",var);
    printf("Variable 'var' address: %p\n",&var);
    printf("Pointer 'ptr_var' (value of ptr_var): %p\n",ptr_var);
    printf("Value accessed via ponter (*ptr_var): %d\n",*ptr_var);
    return 0;
}
