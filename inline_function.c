/// @brief Program to demostrate inline function nedds to be declared as static
/// Advantage of inline function over macro, same square function logic is defined using macro in macro.c

#include <time.h>
#include <stdlib.h>
#include <stdio.h>


/// @note if you remove static from below function it will be a compiler time error
/// as inline function will be replaced at compile time , therefore it is necessary for compiler to know the definition of function
/// hence making it static it will guarante that definition is provided, unlike providing only declaration and linking definition at linking time

static inline int square(int num)
{
    return num*num;
}

int main() {
    int a = 3;
    printf("Square of %d is %d\n", a , square(a));
    printf("Square of %d is %d\n", a+1 , square(a+1));
    return 0;
}
