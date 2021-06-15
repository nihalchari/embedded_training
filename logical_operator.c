#include <stdio.h>

int main()
{
    int a=2;
    int b=1;
    
    //int x = (((a++ && (!b)) && b) ||   ++a);
    
    int x = ((a++ && (!b)) &&  ++a);
    printf("a = %d\nb = %d\nx = %d\n",a,b,x);
    //++a is never executed since lhs of 2nd && is 0
    
    return 0;
}
