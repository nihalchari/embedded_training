/* predict output XOR*/
#include<stdio.h>

int main()
{
    int res = 0;
    res = 20 ^ 20;
    res = res ^ 40;
    res = res ^ 40;
    res = res ^ 13;
    res = res ^ 13;
    res = res ^ 11;
    res = res ^ 88;
    res = res ^ 88;
    res = res ^ 98;
    res = res ^ 99;
    res = res ^ 11;
    res = res ^ 11;
    
    printf("%d\n",res);
    
    return 0;
}

/* output
 10
 */
 
