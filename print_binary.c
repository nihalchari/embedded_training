#include <stdio.h>

void print_binary(int num)
{
    if(num == 0)
    return;
    
    print_binary(num/2);
    printf("%d", num%2);
}


int main()
{
    print_binary(8);
    return 0;
}
